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
#include <iostream>

#include "simulator.h"

//
// Destroy coroutines in the destructor.
//
simulator_t::~simulator_t()
{
    for (auto &proc : all_processes) {
        // std::cout << "destroy " << proc.name << " handle: " << proc.continuation.address() <<
        // std::endl;
        proc.continuation.destroy();
    }
}

//
// Create a process with given name and given top level routine.
//
void simulator_t::make_process(const std::string &name, co_void_t (*func)(simulator_t &sim))
{
    // Allocate new structure for the process.
    all_processes.push_back(process_t(name));

    // Get reference to the new process descriptor.
    auto &proc = all_processes.back();

    // Lazy-start the coroutine and store the continuation.
    proc.continuation = func(*this);
    // std::cout << "process " << proc.name << " handle: " << handle.address() << std::endl;
}

//
// Run the simulation.
//
void simulator_t::run()
{
    // Add all processes to the event queue.
    for (auto &proc : all_processes) {
        proc.next = event_queue;
        event_queue = &proc;
    }

    while (event_queue != nullptr) {
        if (event_queue->delay != 0) {
            // Delta cycle finished.
            // Schedule processes for active signals.
            while (active_signals != nullptr) {
                sensitivity_t *hook = active_signals->hook_list;
                signal_t *next = active_signals->next;

                // Handle all processes, sensitive to this signal.
                for (; hook != nullptr; hook = hook->next) {
                    if (hook->process.next == nullptr) {
                        // Signal change should matches the edge flag.
                        if ((hook->edge & POSEDGE) &&
                            (active_signals->value != 0 ||
                             active_signals->new_value == 0))
                            continue;
                        if ((hook->edge & NEGEDGE) &&
                            (active_signals->value == 0 ||
                             active_signals->new_value != 0))
                            continue;

                        // Put the process to queue of pending events.
                        hook->process.next = event_queue;
                        event_queue = &hook->process;

                        //std::cout << '(' << time_ticks << ") Process '"
                        //          << hook->process.name << "' activated" << std::endl;
                    }
                }

                // Setup a new signal value.
                active_signals->value = active_signals->new_value;
                active_signals->next = nullptr;
                active_signals->is_active = false;
                active_signals = next;
            }
            //std::cout << '(' << time_ticks << ") ---" << std::endl;
        }

        // Select next process from the queue.
        cur_proc = event_queue;
        event_queue = event_queue->next;
        cur_proc->next = nullptr;
        if (cur_proc->delay != 0) {
            // Advance time.
            time_ticks += cur_proc->delay;
        }

        // Resume the process.
        // std::cout << '(' << time_ticks << ") Resume process '" << cur_proc->name << '\'' <<
        // std::endl;
        cur_proc->continuation.resume();
    }
}

//
// Finish the simulation.
//
void simulator_t::finish()
{
    event_queue = nullptr;
}

//
// Delay the current process by a given number of clock ticks.
// Return awaitable object.
// This routine should be invoked as:
//      co_await sim.delay(N);
//
co_await_t simulator_t::delay(uint64_t num_clocks)
{
    // Put the current process to queue of pending events.
    // Keep the queue sorted.
    process_t **que_ptr = &event_queue;
    process_t *p;
    while ((p = *que_ptr) != nullptr) {
        if (p->delay > num_clocks) {
            p->delay -= num_clocks;
            break;
        }

        if (p->delay > 0)
            num_clocks -= p->delay;
        que_ptr = &p->next;
    }
    cur_proc->delay = num_clocks;
    cur_proc->next = p;
    *que_ptr = cur_proc;

    // On return, suspend the currect coroutine and switch back to sim.run().
    return {};
}

//
// Set value of the signal.
// The value will be updated on next simulation cycle.
// If the value changed, put the signal to the active list.
//
void simulator_t::set(signal_t &signal, uint64_t v)
{
    signal.new_value = v;

    if (v != signal.value && !signal.is_active) {
        // Value has changed - put to the list of active signals.
        signal.is_active = true;
        signal.next = active_signals;
        active_signals = &signal;

        //std::cout << '(' << time_ticks << ") Signal '" << signal.name
        //          << "' changed = " << signal.new_value << std::endl;
    }
}

//
// Constructor: bind the current process to a signal,
// sensitive to the specified edge (positive or negative or both).
//
sensitivity_t::sensitivity_t(simulator_t &sim, signal_t &sig, int which_edge)
    : process(sim.current_process()), signal(sig), edge(which_edge)
{
    // Add this hook to the sensitivity list of the given signal.
    next = sig.hook_list;
    prev = nullptr;
    if (next != nullptr)
        next->prev = this;
    sig.hook_list = this;
}

//
// Destructor: unbind the process from the signal.
//
sensitivity_t::~sensitivity_t()
{
    if (next != nullptr) {
        next->prev = prev;
    }
    if (prev != nullptr) {
        prev->next = next;
    }
    if (signal.hook_list == this) {
        signal.hook_list = next;
    }
}
