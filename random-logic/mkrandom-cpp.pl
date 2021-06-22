#!/usr/bin/env perl

$gates = 64;
$steps = 2000;
$loops = 30000;
#$steps = 2;
#$loops = 1;
srand (123);

print qq[#include <iostream>
#include <iomanip>
#include "simulator.h"
];

for ($i = 0; $i < $gates; ++$i) {
    print qq[signal_t a$i(\"a$i\", ~0);
signal_t b$i(\"b$i\", ~0);
signal_t c$i(\"c$i\", ~0);
];
}

@binop = ('%s & %s', '!(%s & %s)', '(%s | %s)', '!(%s | %s)', '%s ^ %s', '!(%s ^ %s)');

for ($i = 0; $i < $gates; ++$i) {
    $x = $i + 1 + int(rand() * ($gates - 1));
    if ($x >= $gates) {
        $x = $x - $gates;
    }

    $y = $i + 1 + int(rand() * ($gates - 1));
    if ($y >= $gates) {
        $y = $y - $gates;
    }

    $op = $binop[int(rand() * 6)];
    $op = sprintf "$op", "a$x.get()", "a$y.get()";

    print qq[co_void_t do_b$i(simulator_t &sim) {
    sensitivity_t hook1(sim, a$x);
    sensitivity_t hook2(sim, a$y);
    for (;;) {
        co_await co_await_t{};
        sim.set(b$i, $op);
    }
}
];
}

for ($i = 0; $i < $gates; ++$i) {
    $x = $i + 1 + int(rand() * ($gates - 1));
    if ($x >= $gates) {
        $x = $x - $gates;
    }

    $y = $i + 1 + int(rand() * ($gates - 1));
    if ($y >= $gates) {
        $y = $y - $gates;
    }

    $op = $binop[int(rand() * 6)];
    $op = sprintf "$op", "b$x.get()", "b$y.get()";

    print qq[co_void_t do_c$i(simulator_t &sim) {
    sensitivity_t hook1(sim, b$x);
    sensitivity_t hook2(sim, b$y);
    for (;;) {
        co_await co_await_t{};
        sim.set(c$i, $op);
    }
}
];
}

print qq[void print_a_b_c() {
    uint64_t a = 0, b = 0, c = 0;
];
for ($i = 0; $i < $gates; ++$i) {
    print qq[    a |= a$i.get() << $i;
    b |= b$i.get() << $i;
    c |= c$i.get() << $i;
];
}
print qq[    std::cout << std::hex << std::setfill('0') << std::setw(16) << a
              << ' ' << std::setw(16) << b
              << ' ' << std::setw(16) << c << std::endl;
}

co_void_t master(simulator_t &sim)
{
];

for ($i = 0; $i < $gates; ++$i) {
    printf "    sim.set(a$i, 0);\n";
}

print qq[    co_await sim.delay(1);
    for (int i=0; i<$loops; i++) {
];

for ($i = 0; $i < $steps; ++$i) {
    if (rand() < 0.2) {
        printf "        co_await sim.delay(1);\n";
    }
    $x = int(rand() * $gates);
    printf "        sim.set(a$x, ! c$x.get());\n";
}

print qq[
        co_await sim.delay(1);
        //print_a_b_c();
    }
    print_a_b_c();
    sim.finish();
}

int main() {
    simulator_t sim;
];

for ($i = 0; $i < $gates; ++$i) {
    print qq[    sim.make_process("b$i", do_b$i);
    sim.make_process("c$i", do_c$i);
];
}
print qq[    sim.make_process("master", master);
    sim.run();
}
];
