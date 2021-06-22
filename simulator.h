//
// Discrete-event simulator based on C++20 coroutines.
//
// Copyright (c) 2021 Serge Vakulenko
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
#include <coroutine>
#include <cstdint>
#include <list>
#include <string>

//
// Return type for coroutines.
// With this return type, on the first call of the coroutine function,
// a handle is returned (with void value), right before the body of the function starts.
//
class co_void_t {
public:
    // This structure defines the behavior of the coroutine:
    // (1) suspend initially right before executing the target routine;
    // (2) suspend when done, let caller destroy the handle.
    struct promise_type {
        co_void_t get_return_object() { return { *this }; }
        std::suspend_always initial_suspend() { return {}; }
        std::suspend_always final_suspend() noexcept { return {}; }
        void unhandled_exception() {}
        void return_void() noexcept {}
    };

    // Constructor: extract the coroutine handle from promise.
    co_void_t(promise_type &promise)
        : handle(std::coroutine_handle<promise_type>::from_promise(promise))
    {
    }

    // Return the handle, cast to void value.
    operator std::coroutine_handle<>() const { return handle; }

private:
    // Store the coroutine handle here.
    std::coroutine_handle<promise_type> handle;
};

//
// Forward declarations.
//
class signal_t;
class sensitivity_t;

//
// Info about the process.
//
class process_t {
    friend class simulator_t;

private:
    process_t *next{ nullptr };             // Member of event queue
    std::string name;                       // Name for log file
    uint64_t delay{ 0 };                    // Time to wait
    std::coroutine_handle<> continuation{}; // Handle for coroutine continuation

public:
    // Allocate a process with given name.
    explicit process_t(const std::string &n) : name(n) {}

    // Get name.
    const std::string &get_name() { return name; }
};

//
// Info for co_await, to switch from coroutine back to sim.run().
//
struct co_await_t {
    constexpr bool await_ready() const noexcept { return false; }
    void await_suspend(std::coroutine_handle<> handle) {}
    constexpr void await_resume() const noexcept {}
};

//
// Discrete time simulator based on coroutines.
//
class simulator_t {
private:
    std::list<process_t> all_processes;     // List of all processes
    process_t *cur_proc{ nullptr };         // Current active process
    process_t *event_queue{ nullptr };      // Queue of pending events
    signal_t *active_signals{ nullptr };    // List of active signals for the current cycle
    uint64_t time_ticks{ 0 };               // Simulated time

public:
    // Default constructor.
    explicit simulator_t() {}

    // Forbid the copy constructor.
    simulator_t(const simulator_t &) = delete;

    // Destructor.
    ~simulator_t();

    //
    // Return the simulated time.
    //
    uint64_t time() const { return time_ticks; }

    //
    // Create a process with given name and given top level routine.
    //
    void make_process(const std::string &name, co_void_t (*func)(simulator_t &sim));

    //
    // Run the simulation.
    //
    void run();

    //
    // Finish the simulation.
    //
    void finish();

    //
    // Delay the current process by a given number of clock ticks.
    // Return awaitable object.
    // This routine should be invoked as:
    //      co_await sim.delay(N);
    //
    co_await_t delay(uint64_t num_clocks);

    //
    // Update value of signal.
    //
    void set(signal_t &signal, uint64_t value);

    //
    // Get current process.
    //
    process_t &current_process() { return *cur_proc; }
};

//
// Signal: a value that may change and activate some processes.
//
class signal_t {
    friend class simulator_t;
    friend class sensitivity_t;

private:
    signal_t            *next{ nullptr };       // Member of active list
    sensitivity_t       *hook_list{ nullptr };  // Sensitivity list: processes to activate
    const std::string   name;                   // Name for log file
    uint64_t            value;                  // Current value
    uint64_t            new_value;              // Value for next cycle
    bool                is_active{ false };     // When value has changed

public:
    // Allocate a signal with given name and optional value.
    explicit signal_t(const std::string &n, uint64_t v = 0) : name(n), value(v), new_value(v) {}

    // Get current value.
    uint64_t get() { return value; }

    // Get name.
    const std::string &get_name() { return name; }
};

//
// Sensitivity hook: connect a process to a signal.
//
class sensitivity_t {
    friend class simulator_t;

private:
    sensitivity_t   *next, *prev;   // Member of sensitivity list
    process_t       &process;       // Process to activate
    signal_t        &signal;        // Signal to be activated from
    int             edge;           // Edge, if nonzero

public:
    // Constructor: bind the current process to a signal,
    // sensitive to the specified edge (positive or negative or both).
    explicit sensitivity_t(simulator_t &sim, signal_t &sig, int which_edge = 0);

    // Destructor: unbind the process from the signal.
    ~sensitivity_t();
};

// Values for sensitivity_t::edge.
enum {
    POSEDGE = 0x1,  // Sensitive on positive edge of the signal
    NEGEDGE = 0x2,  // Sensitive on negative edge of the signal
};

//
// Wait for the signal.
// Hook, wait, then unhook.
//
#define process_wait1(sim, _sig, _edge) { \
        sensitivity_t _hook(_sim, _sig, _edge); \
        co_wait co_await_t{}; \
    }

//
// Wait for either of two signals.
// Hook, wait, then unhook.
//
#define process_wait2(sim, _sig1, _edge1, _sig2, _edge2) { \
        sensitivity_t _hook1(_sim, _sig1, _edge1); \
        sensitivity_t _hook2(_sim, _sig2, _edge2); \
        co_wait co_await_t{}; \
    }

//
// Wait for either of three signals.
// Hook, wait, then unhook.
//
#define process_wait3(sim, _sig1, _edge1, _sig2, _edge2, _sig3, _edge3) { \
        sensitivity_t _hook1(_sim, _sig1, _edge1); \
        sensitivity_t _hook2(_sim, _sig2, _edge2); \
        sensitivity_t _hook3(_sim, _sig3, _edge3); \
        co_wait co_await_t{}; \
    }
