//
// Demo: a process sensitive to posedge of the clock.
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
// Signals.
//
signal_t clk("clock");      // Main clock of the design
signal_t reset("reset");    // Active high, synchronous Reset
signal_t enable("enable");  // Active high enable signal for counter
signal_t count("count");    // 4-bit counter

//
// Clock generator.
//
co_void_t do_clock(simulator_t &sim)
{
    for (;;) {
        sim.set(clk, 1);
        std::cout << '(' << sim.time() << ") Clock set" << std::endl;
        co_await sim.delay(1);

        sim.set(clk, 0);
        std::cout << '(' << sim.time() << ") Clock reset" << std::endl;
        co_await sim.delay(1);
    }
}

//
// 4-bit up-counter with synchronous active high reset and
// with active high enable signal.
//
co_void_t do_counter(simulator_t &sim)
{
    // Make the process sensitive to the clock.
    sensitivity_t hook(sim, clk, POSEDGE);

    for (;;) {
        // Wait for positive edge of the clock.
        co_await co_await_t{};

        // At every rising edge of clock we check if reset is active.
        // If active, we load the counter output with 4'b0000.
        if (reset.get() != 0) {
            sim.set(count, 0);

        // If enable is active, then we increment the counter.
        } else if (enable.get() != 0) {
            std::cout << '(' << sim.time() << ") Increment Counter " << count.get() << std::endl;
            sim.set(count, (count.get() + 1) & 15);
        }
    }
}

//
// Master process.
//
co_void_t master(simulator_t &sim)
{
    std::cout << '(' << sim.time() << ") Started" << std::endl;
    co_await sim.delay(10);

    sim.set(reset, 1);
    std::cout << '(' << sim.time() << ") Asserting Reset" << std::endl;

    co_await sim.delay(20);
    sim.set(reset, 0);
    std::cout << '(' << sim.time() << ") De-Asserting Reset" << std::endl;

    co_await sim.delay(10);
    std::cout << '(' << sim.time() << ") Asserting Enable" << std::endl;
    sim.set(enable, 1);

    co_await sim.delay(40);
    std::cout << '(' << sim.time() << ") De-Asserting Enable" << std::endl;
    sim.set(enable, 0);

    std::cout << '(' << sim.time() << ") Terminating simulation" << std::endl;
    sim.finish();
}

int main(int argc, char **argv)
{
    simulator_t sim;

    // Create processes.
    sim.make_process("clock", do_clock);
    sim.make_process("counter", do_counter);
    sim.make_process("master", master);

    // Run simulation.
    sim.run();
    return 0;
}
