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
#if 0
        if (event_queue->delay != 0) {
            // Delta cycle finished.
            // Schedule processes for active signals.
            while (signal_active != 0) {
                //TODO: activate signals
            }
            std::cout << '(' << time_ticks << ") ---" << std::endl;
        }
#endif
        // Select next process from the queue.
        cur_proc = event_queue;
        event_queue = event_queue->next;
        cur_proc->next = 0;
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
simulator_t::co_await_t simulator_t::delay(uint64_t num_clocks)
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
