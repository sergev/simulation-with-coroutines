#include <iomanip>
#include <iostream>

#include "simulator.h"
signal_t a0("a0", ~0);
signal_t b0("b0", ~0);
signal_t c0("c0", ~0);
signal_t a1("a1", ~0);
signal_t b1("b1", ~0);
signal_t c1("c1", ~0);
signal_t a2("a2", ~0);
signal_t b2("b2", ~0);
signal_t c2("c2", ~0);
signal_t a3("a3", ~0);
signal_t b3("b3", ~0);
signal_t c3("c3", ~0);
signal_t a4("a4", ~0);
signal_t b4("b4", ~0);
signal_t c4("c4", ~0);
signal_t a5("a5", ~0);
signal_t b5("b5", ~0);
signal_t c5("c5", ~0);
signal_t a6("a6", ~0);
signal_t b6("b6", ~0);
signal_t c6("c6", ~0);
signal_t a7("a7", ~0);
signal_t b7("b7", ~0);
signal_t c7("c7", ~0);
signal_t a8("a8", ~0);
signal_t b8("b8", ~0);
signal_t c8("c8", ~0);
signal_t a9("a9", ~0);
signal_t b9("b9", ~0);
signal_t c9("c9", ~0);
signal_t a10("a10", ~0);
signal_t b10("b10", ~0);
signal_t c10("c10", ~0);
signal_t a11("a11", ~0);
signal_t b11("b11", ~0);
signal_t c11("c11", ~0);
signal_t a12("a12", ~0);
signal_t b12("b12", ~0);
signal_t c12("c12", ~0);
signal_t a13("a13", ~0);
signal_t b13("b13", ~0);
signal_t c13("c13", ~0);
signal_t a14("a14", ~0);
signal_t b14("b14", ~0);
signal_t c14("c14", ~0);
signal_t a15("a15", ~0);
signal_t b15("b15", ~0);
signal_t c15("c15", ~0);
signal_t a16("a16", ~0);
signal_t b16("b16", ~0);
signal_t c16("c16", ~0);
signal_t a17("a17", ~0);
signal_t b17("b17", ~0);
signal_t c17("c17", ~0);
signal_t a18("a18", ~0);
signal_t b18("b18", ~0);
signal_t c18("c18", ~0);
signal_t a19("a19", ~0);
signal_t b19("b19", ~0);
signal_t c19("c19", ~0);
signal_t a20("a20", ~0);
signal_t b20("b20", ~0);
signal_t c20("c20", ~0);
signal_t a21("a21", ~0);
signal_t b21("b21", ~0);
signal_t c21("c21", ~0);
signal_t a22("a22", ~0);
signal_t b22("b22", ~0);
signal_t c22("c22", ~0);
signal_t a23("a23", ~0);
signal_t b23("b23", ~0);
signal_t c23("c23", ~0);
signal_t a24("a24", ~0);
signal_t b24("b24", ~0);
signal_t c24("c24", ~0);
signal_t a25("a25", ~0);
signal_t b25("b25", ~0);
signal_t c25("c25", ~0);
signal_t a26("a26", ~0);
signal_t b26("b26", ~0);
signal_t c26("c26", ~0);
signal_t a27("a27", ~0);
signal_t b27("b27", ~0);
signal_t c27("c27", ~0);
signal_t a28("a28", ~0);
signal_t b28("b28", ~0);
signal_t c28("c28", ~0);
signal_t a29("a29", ~0);
signal_t b29("b29", ~0);
signal_t c29("c29", ~0);
signal_t a30("a30", ~0);
signal_t b30("b30", ~0);
signal_t c30("c30", ~0);
signal_t a31("a31", ~0);
signal_t b31("b31", ~0);
signal_t c31("c31", ~0);
signal_t a32("a32", ~0);
signal_t b32("b32", ~0);
signal_t c32("c32", ~0);
signal_t a33("a33", ~0);
signal_t b33("b33", ~0);
signal_t c33("c33", ~0);
signal_t a34("a34", ~0);
signal_t b34("b34", ~0);
signal_t c34("c34", ~0);
signal_t a35("a35", ~0);
signal_t b35("b35", ~0);
signal_t c35("c35", ~0);
signal_t a36("a36", ~0);
signal_t b36("b36", ~0);
signal_t c36("c36", ~0);
signal_t a37("a37", ~0);
signal_t b37("b37", ~0);
signal_t c37("c37", ~0);
signal_t a38("a38", ~0);
signal_t b38("b38", ~0);
signal_t c38("c38", ~0);
signal_t a39("a39", ~0);
signal_t b39("b39", ~0);
signal_t c39("c39", ~0);
signal_t a40("a40", ~0);
signal_t b40("b40", ~0);
signal_t c40("c40", ~0);
signal_t a41("a41", ~0);
signal_t b41("b41", ~0);
signal_t c41("c41", ~0);
signal_t a42("a42", ~0);
signal_t b42("b42", ~0);
signal_t c42("c42", ~0);
signal_t a43("a43", ~0);
signal_t b43("b43", ~0);
signal_t c43("c43", ~0);
signal_t a44("a44", ~0);
signal_t b44("b44", ~0);
signal_t c44("c44", ~0);
signal_t a45("a45", ~0);
signal_t b45("b45", ~0);
signal_t c45("c45", ~0);
signal_t a46("a46", ~0);
signal_t b46("b46", ~0);
signal_t c46("c46", ~0);
signal_t a47("a47", ~0);
signal_t b47("b47", ~0);
signal_t c47("c47", ~0);
signal_t a48("a48", ~0);
signal_t b48("b48", ~0);
signal_t c48("c48", ~0);
signal_t a49("a49", ~0);
signal_t b49("b49", ~0);
signal_t c49("c49", ~0);
signal_t a50("a50", ~0);
signal_t b50("b50", ~0);
signal_t c50("c50", ~0);
signal_t a51("a51", ~0);
signal_t b51("b51", ~0);
signal_t c51("c51", ~0);
signal_t a52("a52", ~0);
signal_t b52("b52", ~0);
signal_t c52("c52", ~0);
signal_t a53("a53", ~0);
signal_t b53("b53", ~0);
signal_t c53("c53", ~0);
signal_t a54("a54", ~0);
signal_t b54("b54", ~0);
signal_t c54("c54", ~0);
signal_t a55("a55", ~0);
signal_t b55("b55", ~0);
signal_t c55("c55", ~0);
signal_t a56("a56", ~0);
signal_t b56("b56", ~0);
signal_t c56("c56", ~0);
signal_t a57("a57", ~0);
signal_t b57("b57", ~0);
signal_t c57("c57", ~0);
signal_t a58("a58", ~0);
signal_t b58("b58", ~0);
signal_t c58("c58", ~0);
signal_t a59("a59", ~0);
signal_t b59("b59", ~0);
signal_t c59("c59", ~0);
signal_t a60("a60", ~0);
signal_t b60("b60", ~0);
signal_t c60("c60", ~0);
signal_t a61("a61", ~0);
signal_t b61("b61", ~0);
signal_t c61("c61", ~0);
signal_t a62("a62", ~0);
signal_t b62("b62", ~0);
signal_t c62("c62", ~0);
signal_t a63("a63", ~0);
signal_t b63("b63", ~0);
signal_t c63("c63", ~0);
co_void_t do_b0(simulator_t &sim)
{
    sensitivity_t hook1(sim, a18);
    sensitivity_t hook2(sim, a27);
    for (;;) {
        co_await co_await_t{};
        sim.set(b0, !(a18.get() ^ a27.get()));
    }
}
co_void_t do_b1(simulator_t &sim)
{
    sensitivity_t hook1(sim, a10);
    sensitivity_t hook2(sim, a9);
    for (;;) {
        co_await co_await_t{};
        sim.set(b1, (a10.get() | a9.get()));
    }
}
co_void_t do_b2(simulator_t &sim)
{
    sensitivity_t hook1(sim, a42);
    sensitivity_t hook2(sim, a55);
    for (;;) {
        co_await co_await_t{};
        sim.set(b2, a42.get() ^ a55.get());
    }
}
co_void_t do_b3(simulator_t &sim)
{
    sensitivity_t hook1(sim, a13);
    sensitivity_t hook2(sim, a53);
    for (;;) {
        co_await co_await_t{};
        sim.set(b3, (a13.get() | a53.get()));
    }
}
co_void_t do_b4(simulator_t &sim)
{
    sensitivity_t hook1(sim, a0);
    sensitivity_t hook2(sim, a14);
    for (;;) {
        co_await co_await_t{};
        sim.set(b4, !(a0.get() ^ a14.get()));
    }
}
co_void_t do_b5(simulator_t &sim)
{
    sensitivity_t hook1(sim, a13);
    sensitivity_t hook2(sim, a57);
    for (;;) {
        co_await co_await_t{};
        sim.set(b5, (a13.get() | a57.get()));
    }
}
co_void_t do_b6(simulator_t &sim)
{
    sensitivity_t hook1(sim, a63);
    sensitivity_t hook2(sim, a16);
    for (;;) {
        co_await co_await_t{};
        sim.set(b6, !(a63.get() ^ a16.get()));
    }
}
co_void_t do_b7(simulator_t &sim)
{
    sensitivity_t hook1(sim, a41);
    sensitivity_t hook2(sim, a26);
    for (;;) {
        co_await co_await_t{};
        sim.set(b7, !(a41.get() ^ a26.get()));
    }
}
co_void_t do_b8(simulator_t &sim)
{
    sensitivity_t hook1(sim, a31);
    sensitivity_t hook2(sim, a62);
    for (;;) {
        co_await co_await_t{};
        sim.set(b8, a31.get() ^ a62.get());
    }
}
co_void_t do_b9(simulator_t &sim)
{
    sensitivity_t hook1(sim, a18);
    sensitivity_t hook2(sim, a54);
    for (;;) {
        co_await co_await_t{};
        sim.set(b9, !(a18.get() ^ a54.get()));
    }
}
co_void_t do_b10(simulator_t &sim)
{
    sensitivity_t hook1(sim, a57);
    sensitivity_t hook2(sim, a5);
    for (;;) {
        co_await co_await_t{};
        sim.set(b10, a57.get() & a5.get());
    }
}
co_void_t do_b11(simulator_t &sim)
{
    sensitivity_t hook1(sim, a5);
    sensitivity_t hook2(sim, a50);
    for (;;) {
        co_await co_await_t{};
        sim.set(b11, !(a5.get() ^ a50.get()));
    }
}
co_void_t do_b12(simulator_t &sim)
{
    sensitivity_t hook1(sim, a28);
    sensitivity_t hook2(sim, a47);
    for (;;) {
        co_await co_await_t{};
        sim.set(b12, !(a28.get() ^ a47.get()));
    }
}
co_void_t do_b13(simulator_t &sim)
{
    sensitivity_t hook1(sim, a55);
    sensitivity_t hook2(sim, a6);
    for (;;) {
        co_await co_await_t{};
        sim.set(b13, !(a55.get() | a6.get()));
    }
}
co_void_t do_b14(simulator_t &sim)
{
    sensitivity_t hook1(sim, a24);
    sensitivity_t hook2(sim, a48);
    for (;;) {
        co_await co_await_t{};
        sim.set(b14, !(a24.get() ^ a48.get()));
    }
}
co_void_t do_b15(simulator_t &sim)
{
    sensitivity_t hook1(sim, a45);
    sensitivity_t hook2(sim, a28);
    for (;;) {
        co_await co_await_t{};
        sim.set(b15, !(a45.get() ^ a28.get()));
    }
}
co_void_t do_b16(simulator_t &sim)
{
    sensitivity_t hook1(sim, a36);
    sensitivity_t hook2(sim, a26);
    for (;;) {
        co_await co_await_t{};
        sim.set(b16, !(a36.get() | a26.get()));
    }
}
co_void_t do_b17(simulator_t &sim)
{
    sensitivity_t hook1(sim, a39);
    sensitivity_t hook2(sim, a55);
    for (;;) {
        co_await co_await_t{};
        sim.set(b17, !(a39.get() & a55.get()));
    }
}
co_void_t do_b18(simulator_t &sim)
{
    sensitivity_t hook1(sim, a26);
    sensitivity_t hook2(sim, a57);
    for (;;) {
        co_await co_await_t{};
        sim.set(b18, !(a26.get() & a57.get()));
    }
}
co_void_t do_b19(simulator_t &sim)
{
    sensitivity_t hook1(sim, a39);
    sensitivity_t hook2(sim, a32);
    for (;;) {
        co_await co_await_t{};
        sim.set(b19, a39.get() ^ a32.get());
    }
}
co_void_t do_b20(simulator_t &sim)
{
    sensitivity_t hook1(sim, a13);
    sensitivity_t hook2(sim, a55);
    for (;;) {
        co_await co_await_t{};
        sim.set(b20, !(a13.get() & a55.get()));
    }
}
co_void_t do_b21(simulator_t &sim)
{
    sensitivity_t hook1(sim, a51);
    sensitivity_t hook2(sim, a46);
    for (;;) {
        co_await co_await_t{};
        sim.set(b21, (a51.get() | a46.get()));
    }
}
co_void_t do_b22(simulator_t &sim)
{
    sensitivity_t hook1(sim, a18);
    sensitivity_t hook2(sim, a51);
    for (;;) {
        co_await co_await_t{};
        sim.set(b22, a18.get() ^ a51.get());
    }
}
co_void_t do_b23(simulator_t &sim)
{
    sensitivity_t hook1(sim, a17);
    sensitivity_t hook2(sim, a43);
    for (;;) {
        co_await co_await_t{};
        sim.set(b23, a17.get() ^ a43.get());
    }
}
co_void_t do_b24(simulator_t &sim)
{
    sensitivity_t hook1(sim, a16);
    sensitivity_t hook2(sim, a2);
    for (;;) {
        co_await co_await_t{};
        sim.set(b24, (a16.get() | a2.get()));
    }
}
co_void_t do_b25(simulator_t &sim)
{
    sensitivity_t hook1(sim, a30);
    sensitivity_t hook2(sim, a32);
    for (;;) {
        co_await co_await_t{};
        sim.set(b25, !(a30.get() | a32.get()));
    }
}
co_void_t do_b26(simulator_t &sim)
{
    sensitivity_t hook1(sim, a44);
    sensitivity_t hook2(sim, a62);
    for (;;) {
        co_await co_await_t{};
        sim.set(b26, a44.get() & a62.get());
    }
}
co_void_t do_b27(simulator_t &sim)
{
    sensitivity_t hook1(sim, a52);
    sensitivity_t hook2(sim, a25);
    for (;;) {
        co_await co_await_t{};
        sim.set(b27, !(a52.get() ^ a25.get()));
    }
}
co_void_t do_b28(simulator_t &sim)
{
    sensitivity_t hook1(sim, a36);
    sensitivity_t hook2(sim, a61);
    for (;;) {
        co_await co_await_t{};
        sim.set(b28, !(a36.get() | a61.get()));
    }
}
co_void_t do_b29(simulator_t &sim)
{
    sensitivity_t hook1(sim, a21);
    sensitivity_t hook2(sim, a48);
    for (;;) {
        co_await co_await_t{};
        sim.set(b29, !(a21.get() | a48.get()));
    }
}
co_void_t do_b30(simulator_t &sim)
{
    sensitivity_t hook1(sim, a47);
    sensitivity_t hook2(sim, a56);
    for (;;) {
        co_await co_await_t{};
        sim.set(b30, !(a47.get() & a56.get()));
    }
}
co_void_t do_b31(simulator_t &sim)
{
    sensitivity_t hook1(sim, a56);
    sensitivity_t hook2(sim, a17);
    for (;;) {
        co_await co_await_t{};
        sim.set(b31, !(a56.get() & a17.get()));
    }
}
co_void_t do_b32(simulator_t &sim)
{
    sensitivity_t hook1(sim, a18);
    sensitivity_t hook2(sim, a4);
    for (;;) {
        co_await co_await_t{};
        sim.set(b32, !(a18.get() ^ a4.get()));
    }
}
co_void_t do_b33(simulator_t &sim)
{
    sensitivity_t hook1(sim, a56);
    sensitivity_t hook2(sim, a52);
    for (;;) {
        co_await co_await_t{};
        sim.set(b33, !(a56.get() & a52.get()));
    }
}
co_void_t do_b34(simulator_t &sim)
{
    sensitivity_t hook1(sim, a48);
    sensitivity_t hook2(sim, a28);
    for (;;) {
        co_await co_await_t{};
        sim.set(b34, !(a48.get() ^ a28.get()));
    }
}
co_void_t do_b35(simulator_t &sim)
{
    sensitivity_t hook1(sim, a40);
    sensitivity_t hook2(sim, a49);
    for (;;) {
        co_await co_await_t{};
        sim.set(b35, a40.get() & a49.get());
    }
}
co_void_t do_b36(simulator_t &sim)
{
    sensitivity_t hook1(sim, a40);
    sensitivity_t hook2(sim, a5);
    for (;;) {
        co_await co_await_t{};
        sim.set(b36, (a40.get() | a5.get()));
    }
}
co_void_t do_b37(simulator_t &sim)
{
    sensitivity_t hook1(sim, a7);
    sensitivity_t hook2(sim, a11);
    for (;;) {
        co_await co_await_t{};
        sim.set(b37, !(a7.get() & a11.get()));
    }
}
co_void_t do_b38(simulator_t &sim)
{
    sensitivity_t hook1(sim, a33);
    sensitivity_t hook2(sim, a28);
    for (;;) {
        co_await co_await_t{};
        sim.set(b38, a33.get() ^ a28.get());
    }
}
co_void_t do_b39(simulator_t &sim)
{
    sensitivity_t hook1(sim, a0);
    sensitivity_t hook2(sim, a9);
    for (;;) {
        co_await co_await_t{};
        sim.set(b39, a0.get() & a9.get());
    }
}
co_void_t do_b40(simulator_t &sim)
{
    sensitivity_t hook1(sim, a30);
    sensitivity_t hook2(sim, a24);
    for (;;) {
        co_await co_await_t{};
        sim.set(b40, (a30.get() | a24.get()));
    }
}
co_void_t do_b41(simulator_t &sim)
{
    sensitivity_t hook1(sim, a38);
    sensitivity_t hook2(sim, a5);
    for (;;) {
        co_await co_await_t{};
        sim.set(b41, a38.get() & a5.get());
    }
}
co_void_t do_b42(simulator_t &sim)
{
    sensitivity_t hook1(sim, a10);
    sensitivity_t hook2(sim, a41);
    for (;;) {
        co_await co_await_t{};
        sim.set(b42, (a10.get() | a41.get()));
    }
}
co_void_t do_b43(simulator_t &sim)
{
    sensitivity_t hook1(sim, a24);
    sensitivity_t hook2(sim, a39);
    for (;;) {
        co_await co_await_t{};
        sim.set(b43, a24.get() & a39.get());
    }
}
co_void_t do_b44(simulator_t &sim)
{
    sensitivity_t hook1(sim, a41);
    sensitivity_t hook2(sim, a54);
    for (;;) {
        co_await co_await_t{};
        sim.set(b44, a41.get() ^ a54.get());
    }
}
co_void_t do_b45(simulator_t &sim)
{
    sensitivity_t hook1(sim, a29);
    sensitivity_t hook2(sim, a32);
    for (;;) {
        co_await co_await_t{};
        sim.set(b45, !(a29.get() & a32.get()));
    }
}
co_void_t do_b46(simulator_t &sim)
{
    sensitivity_t hook1(sim, a18);
    sensitivity_t hook2(sim, a54);
    for (;;) {
        co_await co_await_t{};
        sim.set(b46, a18.get() & a54.get());
    }
}
co_void_t do_b47(simulator_t &sim)
{
    sensitivity_t hook1(sim, a45);
    sensitivity_t hook2(sim, a55);
    for (;;) {
        co_await co_await_t{};
        sim.set(b47, !(a45.get() ^ a55.get()));
    }
}
co_void_t do_b48(simulator_t &sim)
{
    sensitivity_t hook1(sim, a15);
    sensitivity_t hook2(sim, a16);
    for (;;) {
        co_await co_await_t{};
        sim.set(b48, !(a15.get() ^ a16.get()));
    }
}
co_void_t do_b49(simulator_t &sim)
{
    sensitivity_t hook1(sim, a13);
    sensitivity_t hook2(sim, a55);
    for (;;) {
        co_await co_await_t{};
        sim.set(b49, !(a13.get() & a55.get()));
    }
}
co_void_t do_b50(simulator_t &sim)
{
    sensitivity_t hook1(sim, a28);
    sensitivity_t hook2(sim, a6);
    for (;;) {
        co_await co_await_t{};
        sim.set(b50, !(a28.get() & a6.get()));
    }
}
co_void_t do_b51(simulator_t &sim)
{
    sensitivity_t hook1(sim, a5);
    sensitivity_t hook2(sim, a37);
    for (;;) {
        co_await co_await_t{};
        sim.set(b51, !(a5.get() & a37.get()));
    }
}
co_void_t do_b52(simulator_t &sim)
{
    sensitivity_t hook1(sim, a50);
    sensitivity_t hook2(sim, a42);
    for (;;) {
        co_await co_await_t{};
        sim.set(b52, a50.get() & a42.get());
    }
}
co_void_t do_b53(simulator_t &sim)
{
    sensitivity_t hook1(sim, a57);
    sensitivity_t hook2(sim, a5);
    for (;;) {
        co_await co_await_t{};
        sim.set(b53, !(a57.get() ^ a5.get()));
    }
}
co_void_t do_b54(simulator_t &sim)
{
    sensitivity_t hook1(sim, a35);
    sensitivity_t hook2(sim, a10);
    for (;;) {
        co_await co_await_t{};
        sim.set(b54, !(a35.get() | a10.get()));
    }
}
co_void_t do_b55(simulator_t &sim)
{
    sensitivity_t hook1(sim, a49);
    sensitivity_t hook2(sim, a38);
    for (;;) {
        co_await co_await_t{};
        sim.set(b55, a49.get() ^ a38.get());
    }
}
co_void_t do_b56(simulator_t &sim)
{
    sensitivity_t hook1(sim, a46);
    sensitivity_t hook2(sim, a48);
    for (;;) {
        co_await co_await_t{};
        sim.set(b56, !(a46.get() | a48.get()));
    }
}
co_void_t do_b57(simulator_t &sim)
{
    sensitivity_t hook1(sim, a56);
    sensitivity_t hook2(sim, a33);
    for (;;) {
        co_await co_await_t{};
        sim.set(b57, !(a56.get() | a33.get()));
    }
}
co_void_t do_b58(simulator_t &sim)
{
    sensitivity_t hook1(sim, a55);
    sensitivity_t hook2(sim, a55);
    for (;;) {
        co_await co_await_t{};
        sim.set(b58, !(a55.get() & a55.get()));
    }
}
co_void_t do_b59(simulator_t &sim)
{
    sensitivity_t hook1(sim, a40);
    sensitivity_t hook2(sim, a22);
    for (;;) {
        co_await co_await_t{};
        sim.set(b59, a40.get() & a22.get());
    }
}
co_void_t do_b60(simulator_t &sim)
{
    sensitivity_t hook1(sim, a14);
    sensitivity_t hook2(sim, a61);
    for (;;) {
        co_await co_await_t{};
        sim.set(b60, !(a14.get() ^ a61.get()));
    }
}
co_void_t do_b61(simulator_t &sim)
{
    sensitivity_t hook1(sim, a28);
    sensitivity_t hook2(sim, a53);
    for (;;) {
        co_await co_await_t{};
        sim.set(b61, !(a28.get() ^ a53.get()));
    }
}
co_void_t do_b62(simulator_t &sim)
{
    sensitivity_t hook1(sim, a49);
    sensitivity_t hook2(sim, a23);
    for (;;) {
        co_await co_await_t{};
        sim.set(b62, (a49.get() | a23.get()));
    }
}
co_void_t do_b63(simulator_t &sim)
{
    sensitivity_t hook1(sim, a4);
    sensitivity_t hook2(sim, a11);
    for (;;) {
        co_await co_await_t{};
        sim.set(b63, !(a4.get() ^ a11.get()));
    }
}
co_void_t do_c0(simulator_t &sim)
{
    sensitivity_t hook1(sim, b20);
    sensitivity_t hook2(sim, b3);
    for (;;) {
        co_await co_await_t{};
        sim.set(c0, !(b20.get() & b3.get()));
    }
}
co_void_t do_c1(simulator_t &sim)
{
    sensitivity_t hook1(sim, b58);
    sensitivity_t hook2(sim, b63);
    for (;;) {
        co_await co_await_t{};
        sim.set(c1, !(b58.get() & b63.get()));
    }
}
co_void_t do_c2(simulator_t &sim)
{
    sensitivity_t hook1(sim, b23);
    sensitivity_t hook2(sim, b22);
    for (;;) {
        co_await co_await_t{};
        sim.set(c2, (b23.get() | b22.get()));
    }
}
co_void_t do_c3(simulator_t &sim)
{
    sensitivity_t hook1(sim, b50);
    sensitivity_t hook2(sim, b25);
    for (;;) {
        co_await co_await_t{};
        sim.set(c3, !(b50.get() | b25.get()));
    }
}
co_void_t do_c4(simulator_t &sim)
{
    sensitivity_t hook1(sim, b39);
    sensitivity_t hook2(sim, b3);
    for (;;) {
        co_await co_await_t{};
        sim.set(c4, b39.get() ^ b3.get());
    }
}
co_void_t do_c5(simulator_t &sim)
{
    sensitivity_t hook1(sim, b57);
    sensitivity_t hook2(sim, b22);
    for (;;) {
        co_await co_await_t{};
        sim.set(c5, !(b57.get() & b22.get()));
    }
}
co_void_t do_c6(simulator_t &sim)
{
    sensitivity_t hook1(sim, b44);
    sensitivity_t hook2(sim, b9);
    for (;;) {
        co_await co_await_t{};
        sim.set(c6, b44.get() ^ b9.get());
    }
}
co_void_t do_c7(simulator_t &sim)
{
    sensitivity_t hook1(sim, b49);
    sensitivity_t hook2(sim, b61);
    for (;;) {
        co_await co_await_t{};
        sim.set(c7, !(b49.get() | b61.get()));
    }
}
co_void_t do_c8(simulator_t &sim)
{
    sensitivity_t hook1(sim, b50);
    sensitivity_t hook2(sim, b9);
    for (;;) {
        co_await co_await_t{};
        sim.set(c8, !(b50.get() | b9.get()));
    }
}
co_void_t do_c9(simulator_t &sim)
{
    sensitivity_t hook1(sim, b10);
    sensitivity_t hook2(sim, b49);
    for (;;) {
        co_await co_await_t{};
        sim.set(c9, b10.get() ^ b49.get());
    }
}
co_void_t do_c10(simulator_t &sim)
{
    sensitivity_t hook1(sim, b63);
    sensitivity_t hook2(sim, b20);
    for (;;) {
        co_await co_await_t{};
        sim.set(c10, b63.get() & b20.get());
    }
}
co_void_t do_c11(simulator_t &sim)
{
    sensitivity_t hook1(sim, b22);
    sensitivity_t hook2(sim, b60);
    for (;;) {
        co_await co_await_t{};
        sim.set(c11, (b22.get() | b60.get()));
    }
}
co_void_t do_c12(simulator_t &sim)
{
    sensitivity_t hook1(sim, b37);
    sensitivity_t hook2(sim, b9);
    for (;;) {
        co_await co_await_t{};
        sim.set(c12, b37.get() ^ b9.get());
    }
}
co_void_t do_c13(simulator_t &sim)
{
    sensitivity_t hook1(sim, b43);
    sensitivity_t hook2(sim, b54);
    for (;;) {
        co_await co_await_t{};
        sim.set(c13, !(b43.get() ^ b54.get()));
    }
}
co_void_t do_c14(simulator_t &sim)
{
    sensitivity_t hook1(sim, b62);
    sensitivity_t hook2(sim, b43);
    for (;;) {
        co_await co_await_t{};
        sim.set(c14, !(b62.get() ^ b43.get()));
    }
}
co_void_t do_c15(simulator_t &sim)
{
    sensitivity_t hook1(sim, b63);
    sensitivity_t hook2(sim, b47);
    for (;;) {
        co_await co_await_t{};
        sim.set(c15, !(b63.get() & b47.get()));
    }
}
co_void_t do_c16(simulator_t &sim)
{
    sensitivity_t hook1(sim, b57);
    sensitivity_t hook2(sim, b44);
    for (;;) {
        co_await co_await_t{};
        sim.set(c16, b57.get() ^ b44.get());
    }
}
co_void_t do_c17(simulator_t &sim)
{
    sensitivity_t hook1(sim, b32);
    sensitivity_t hook2(sim, b11);
    for (;;) {
        co_await co_await_t{};
        sim.set(c17, !(b32.get() & b11.get()));
    }
}
co_void_t do_c18(simulator_t &sim)
{
    sensitivity_t hook1(sim, b57);
    sensitivity_t hook2(sim, b53);
    for (;;) {
        co_await co_await_t{};
        sim.set(c18, b57.get() ^ b53.get());
    }
}
co_void_t do_c19(simulator_t &sim)
{
    sensitivity_t hook1(sim, b24);
    sensitivity_t hook2(sim, b51);
    for (;;) {
        co_await co_await_t{};
        sim.set(c19, b24.get() ^ b51.get());
    }
}
co_void_t do_c20(simulator_t &sim)
{
    sensitivity_t hook1(sim, b53);
    sensitivity_t hook2(sim, b48);
    for (;;) {
        co_await co_await_t{};
        sim.set(c20, (b53.get() | b48.get()));
    }
}
co_void_t do_c21(simulator_t &sim)
{
    sensitivity_t hook1(sim, b12);
    sensitivity_t hook2(sim, b27);
    for (;;) {
        co_await co_await_t{};
        sim.set(c21, !(b12.get() ^ b27.get()));
    }
}
co_void_t do_c22(simulator_t &sim)
{
    sensitivity_t hook1(sim, b32);
    sensitivity_t hook2(sim, b4);
    for (;;) {
        co_await co_await_t{};
        sim.set(c22, b32.get() ^ b4.get());
    }
}
co_void_t do_c23(simulator_t &sim)
{
    sensitivity_t hook1(sim, b37);
    sensitivity_t hook2(sim, b2);
    for (;;) {
        co_await co_await_t{};
        sim.set(c23, !(b37.get() ^ b2.get()));
    }
}
co_void_t do_c24(simulator_t &sim)
{
    sensitivity_t hook1(sim, b34);
    sensitivity_t hook2(sim, b4);
    for (;;) {
        co_await co_await_t{};
        sim.set(c24, (b34.get() | b4.get()));
    }
}
co_void_t do_c25(simulator_t &sim)
{
    sensitivity_t hook1(sim, b9);
    sensitivity_t hook2(sim, b24);
    for (;;) {
        co_await co_await_t{};
        sim.set(c25, (b9.get() | b24.get()));
    }
}
co_void_t do_c26(simulator_t &sim)
{
    sensitivity_t hook1(sim, b60);
    sensitivity_t hook2(sim, b13);
    for (;;) {
        co_await co_await_t{};
        sim.set(c26, (b60.get() | b13.get()));
    }
}
co_void_t do_c27(simulator_t &sim)
{
    sensitivity_t hook1(sim, b22);
    sensitivity_t hook2(sim, b39);
    for (;;) {
        co_await co_await_t{};
        sim.set(c27, !(b22.get() & b39.get()));
    }
}
co_void_t do_c28(simulator_t &sim)
{
    sensitivity_t hook1(sim, b60);
    sensitivity_t hook2(sim, b39);
    for (;;) {
        co_await co_await_t{};
        sim.set(c28, !(b60.get() & b39.get()));
    }
}
co_void_t do_c29(simulator_t &sim)
{
    sensitivity_t hook1(sim, b32);
    sensitivity_t hook2(sim, b14);
    for (;;) {
        co_await co_await_t{};
        sim.set(c29, b32.get() ^ b14.get());
    }
}
co_void_t do_c30(simulator_t &sim)
{
    sensitivity_t hook1(sim, b57);
    sensitivity_t hook2(sim, b49);
    for (;;) {
        co_await co_await_t{};
        sim.set(c30, !(b57.get() | b49.get()));
    }
}
co_void_t do_c31(simulator_t &sim)
{
    sensitivity_t hook1(sim, b61);
    sensitivity_t hook2(sim, b44);
    for (;;) {
        co_await co_await_t{};
        sim.set(c31, b61.get() & b44.get());
    }
}
co_void_t do_c32(simulator_t &sim)
{
    sensitivity_t hook1(sim, b19);
    sensitivity_t hook2(sim, b20);
    for (;;) {
        co_await co_await_t{};
        sim.set(c32, b19.get() ^ b20.get());
    }
}
co_void_t do_c33(simulator_t &sim)
{
    sensitivity_t hook1(sim, b45);
    sensitivity_t hook2(sim, b24);
    for (;;) {
        co_await co_await_t{};
        sim.set(c33, !(b45.get() ^ b24.get()));
    }
}
co_void_t do_c34(simulator_t &sim)
{
    sensitivity_t hook1(sim, b31);
    sensitivity_t hook2(sim, b35);
    for (;;) {
        co_await co_await_t{};
        sim.set(c34, !(b31.get() | b35.get()));
    }
}
co_void_t do_c35(simulator_t &sim)
{
    sensitivity_t hook1(sim, b23);
    sensitivity_t hook2(sim, b63);
    for (;;) {
        co_await co_await_t{};
        sim.set(c35, b23.get() ^ b63.get());
    }
}
co_void_t do_c36(simulator_t &sim)
{
    sensitivity_t hook1(sim, b5);
    sensitivity_t hook2(sim, b48);
    for (;;) {
        co_await co_await_t{};
        sim.set(c36, (b5.get() | b48.get()));
    }
}
co_void_t do_c37(simulator_t &sim)
{
    sensitivity_t hook1(sim, b20);
    sensitivity_t hook2(sim, b26);
    for (;;) {
        co_await co_await_t{};
        sim.set(c37, b20.get() ^ b26.get());
    }
}
co_void_t do_c38(simulator_t &sim)
{
    sensitivity_t hook1(sim, b30);
    sensitivity_t hook2(sim, b21);
    for (;;) {
        co_await co_await_t{};
        sim.set(c38, b30.get() ^ b21.get());
    }
}
co_void_t do_c39(simulator_t &sim)
{
    sensitivity_t hook1(sim, b62);
    sensitivity_t hook2(sim, b54);
    for (;;) {
        co_await co_await_t{};
        sim.set(c39, b62.get() & b54.get());
    }
}
co_void_t do_c40(simulator_t &sim)
{
    sensitivity_t hook1(sim, b13);
    sensitivity_t hook2(sim, b36);
    for (;;) {
        co_await co_await_t{};
        sim.set(c40, b13.get() & b36.get());
    }
}
co_void_t do_c41(simulator_t &sim)
{
    sensitivity_t hook1(sim, b37);
    sensitivity_t hook2(sim, b22);
    for (;;) {
        co_await co_await_t{};
        sim.set(c41, !(b37.get() & b22.get()));
    }
}
co_void_t do_c42(simulator_t &sim)
{
    sensitivity_t hook1(sim, b26);
    sensitivity_t hook2(sim, b25);
    for (;;) {
        co_await co_await_t{};
        sim.set(c42, !(b26.get() | b25.get()));
    }
}
co_void_t do_c43(simulator_t &sim)
{
    sensitivity_t hook1(sim, b8);
    sensitivity_t hook2(sim, b18);
    for (;;) {
        co_await co_await_t{};
        sim.set(c43, b8.get() & b18.get());
    }
}
co_void_t do_c44(simulator_t &sim)
{
    sensitivity_t hook1(sim, b47);
    sensitivity_t hook2(sim, b61);
    for (;;) {
        co_await co_await_t{};
        sim.set(c44, !(b47.get() | b61.get()));
    }
}
co_void_t do_c45(simulator_t &sim)
{
    sensitivity_t hook1(sim, b40);
    sensitivity_t hook2(sim, b15);
    for (;;) {
        co_await co_await_t{};
        sim.set(c45, !(b40.get() | b15.get()));
    }
}
co_void_t do_c46(simulator_t &sim)
{
    sensitivity_t hook1(sim, b11);
    sensitivity_t hook2(sim, b39);
    for (;;) {
        co_await co_await_t{};
        sim.set(c46, !(b11.get() & b39.get()));
    }
}
co_void_t do_c47(simulator_t &sim)
{
    sensitivity_t hook1(sim, b17);
    sensitivity_t hook2(sim, b61);
    for (;;) {
        co_await co_await_t{};
        sim.set(c47, !(b17.get() ^ b61.get()));
    }
}
co_void_t do_c48(simulator_t &sim)
{
    sensitivity_t hook1(sim, b15);
    sensitivity_t hook2(sim, b26);
    for (;;) {
        co_await co_await_t{};
        sim.set(c48, !(b15.get() | b26.get()));
    }
}
co_void_t do_c49(simulator_t &sim)
{
    sensitivity_t hook1(sim, b45);
    sensitivity_t hook2(sim, b48);
    for (;;) {
        co_await co_await_t{};
        sim.set(c49, !(b45.get() & b48.get()));
    }
}
co_void_t do_c50(simulator_t &sim)
{
    sensitivity_t hook1(sim, b15);
    sensitivity_t hook2(sim, b44);
    for (;;) {
        co_await co_await_t{};
        sim.set(c50, b15.get() & b44.get());
    }
}
co_void_t do_c51(simulator_t &sim)
{
    sensitivity_t hook1(sim, b38);
    sensitivity_t hook2(sim, b44);
    for (;;) {
        co_await co_await_t{};
        sim.set(c51, !(b38.get() & b44.get()));
    }
}
co_void_t do_c52(simulator_t &sim)
{
    sensitivity_t hook1(sim, b54);
    sensitivity_t hook2(sim, b13);
    for (;;) {
        co_await co_await_t{};
        sim.set(c52, !(b54.get() | b13.get()));
    }
}
co_void_t do_c53(simulator_t &sim)
{
    sensitivity_t hook1(sim, b37);
    sensitivity_t hook2(sim, b28);
    for (;;) {
        co_await co_await_t{};
        sim.set(c53, b37.get() ^ b28.get());
    }
}
co_void_t do_c54(simulator_t &sim)
{
    sensitivity_t hook1(sim, b61);
    sensitivity_t hook2(sim, b33);
    for (;;) {
        co_await co_await_t{};
        sim.set(c54, b61.get() & b33.get());
    }
}
co_void_t do_c55(simulator_t &sim)
{
    sensitivity_t hook1(sim, b39);
    sensitivity_t hook2(sim, b17);
    for (;;) {
        co_await co_await_t{};
        sim.set(c55, !(b39.get() ^ b17.get()));
    }
}
co_void_t do_c56(simulator_t &sim)
{
    sensitivity_t hook1(sim, b20);
    sensitivity_t hook2(sim, b37);
    for (;;) {
        co_await co_await_t{};
        sim.set(c56, (b20.get() | b37.get()));
    }
}
co_void_t do_c57(simulator_t &sim)
{
    sensitivity_t hook1(sim, b47);
    sensitivity_t hook2(sim, b3);
    for (;;) {
        co_await co_await_t{};
        sim.set(c57, !(b47.get() | b3.get()));
    }
}
co_void_t do_c58(simulator_t &sim)
{
    sensitivity_t hook1(sim, b11);
    sensitivity_t hook2(sim, b25);
    for (;;) {
        co_await co_await_t{};
        sim.set(c58, !(b11.get() ^ b25.get()));
    }
}
co_void_t do_c59(simulator_t &sim)
{
    sensitivity_t hook1(sim, b30);
    sensitivity_t hook2(sim, b50);
    for (;;) {
        co_await co_await_t{};
        sim.set(c59, b30.get() ^ b50.get());
    }
}
co_void_t do_c60(simulator_t &sim)
{
    sensitivity_t hook1(sim, b55);
    sensitivity_t hook2(sim, b47);
    for (;;) {
        co_await co_await_t{};
        sim.set(c60, !(b55.get() & b47.get()));
    }
}
co_void_t do_c61(simulator_t &sim)
{
    sensitivity_t hook1(sim, b34);
    sensitivity_t hook2(sim, b30);
    for (;;) {
        co_await co_await_t{};
        sim.set(c61, !(b34.get() & b30.get()));
    }
}
co_void_t do_c62(simulator_t &sim)
{
    sensitivity_t hook1(sim, b56);
    sensitivity_t hook2(sim, b42);
    for (;;) {
        co_await co_await_t{};
        sim.set(c62, b56.get() ^ b42.get());
    }
}
co_void_t do_c63(simulator_t &sim)
{
    sensitivity_t hook1(sim, b20);
    sensitivity_t hook2(sim, b0);
    for (;;) {
        co_await co_await_t{};
        sim.set(c63, !(b20.get() | b0.get()));
    }
}
void print_a_b_c()
{
    uint64_t a = 0, b = 0, c = 0;
    a |= a0.get() << 0;
    b |= b0.get() << 0;
    c |= c0.get() << 0;
    a |= a1.get() << 1;
    b |= b1.get() << 1;
    c |= c1.get() << 1;
    a |= a2.get() << 2;
    b |= b2.get() << 2;
    c |= c2.get() << 2;
    a |= a3.get() << 3;
    b |= b3.get() << 3;
    c |= c3.get() << 3;
    a |= a4.get() << 4;
    b |= b4.get() << 4;
    c |= c4.get() << 4;
    a |= a5.get() << 5;
    b |= b5.get() << 5;
    c |= c5.get() << 5;
    a |= a6.get() << 6;
    b |= b6.get() << 6;
    c |= c6.get() << 6;
    a |= a7.get() << 7;
    b |= b7.get() << 7;
    c |= c7.get() << 7;
    a |= a8.get() << 8;
    b |= b8.get() << 8;
    c |= c8.get() << 8;
    a |= a9.get() << 9;
    b |= b9.get() << 9;
    c |= c9.get() << 9;
    a |= a10.get() << 10;
    b |= b10.get() << 10;
    c |= c10.get() << 10;
    a |= a11.get() << 11;
    b |= b11.get() << 11;
    c |= c11.get() << 11;
    a |= a12.get() << 12;
    b |= b12.get() << 12;
    c |= c12.get() << 12;
    a |= a13.get() << 13;
    b |= b13.get() << 13;
    c |= c13.get() << 13;
    a |= a14.get() << 14;
    b |= b14.get() << 14;
    c |= c14.get() << 14;
    a |= a15.get() << 15;
    b |= b15.get() << 15;
    c |= c15.get() << 15;
    a |= a16.get() << 16;
    b |= b16.get() << 16;
    c |= c16.get() << 16;
    a |= a17.get() << 17;
    b |= b17.get() << 17;
    c |= c17.get() << 17;
    a |= a18.get() << 18;
    b |= b18.get() << 18;
    c |= c18.get() << 18;
    a |= a19.get() << 19;
    b |= b19.get() << 19;
    c |= c19.get() << 19;
    a |= a20.get() << 20;
    b |= b20.get() << 20;
    c |= c20.get() << 20;
    a |= a21.get() << 21;
    b |= b21.get() << 21;
    c |= c21.get() << 21;
    a |= a22.get() << 22;
    b |= b22.get() << 22;
    c |= c22.get() << 22;
    a |= a23.get() << 23;
    b |= b23.get() << 23;
    c |= c23.get() << 23;
    a |= a24.get() << 24;
    b |= b24.get() << 24;
    c |= c24.get() << 24;
    a |= a25.get() << 25;
    b |= b25.get() << 25;
    c |= c25.get() << 25;
    a |= a26.get() << 26;
    b |= b26.get() << 26;
    c |= c26.get() << 26;
    a |= a27.get() << 27;
    b |= b27.get() << 27;
    c |= c27.get() << 27;
    a |= a28.get() << 28;
    b |= b28.get() << 28;
    c |= c28.get() << 28;
    a |= a29.get() << 29;
    b |= b29.get() << 29;
    c |= c29.get() << 29;
    a |= a30.get() << 30;
    b |= b30.get() << 30;
    c |= c30.get() << 30;
    a |= a31.get() << 31;
    b |= b31.get() << 31;
    c |= c31.get() << 31;
    a |= a32.get() << 32;
    b |= b32.get() << 32;
    c |= c32.get() << 32;
    a |= a33.get() << 33;
    b |= b33.get() << 33;
    c |= c33.get() << 33;
    a |= a34.get() << 34;
    b |= b34.get() << 34;
    c |= c34.get() << 34;
    a |= a35.get() << 35;
    b |= b35.get() << 35;
    c |= c35.get() << 35;
    a |= a36.get() << 36;
    b |= b36.get() << 36;
    c |= c36.get() << 36;
    a |= a37.get() << 37;
    b |= b37.get() << 37;
    c |= c37.get() << 37;
    a |= a38.get() << 38;
    b |= b38.get() << 38;
    c |= c38.get() << 38;
    a |= a39.get() << 39;
    b |= b39.get() << 39;
    c |= c39.get() << 39;
    a |= a40.get() << 40;
    b |= b40.get() << 40;
    c |= c40.get() << 40;
    a |= a41.get() << 41;
    b |= b41.get() << 41;
    c |= c41.get() << 41;
    a |= a42.get() << 42;
    b |= b42.get() << 42;
    c |= c42.get() << 42;
    a |= a43.get() << 43;
    b |= b43.get() << 43;
    c |= c43.get() << 43;
    a |= a44.get() << 44;
    b |= b44.get() << 44;
    c |= c44.get() << 44;
    a |= a45.get() << 45;
    b |= b45.get() << 45;
    c |= c45.get() << 45;
    a |= a46.get() << 46;
    b |= b46.get() << 46;
    c |= c46.get() << 46;
    a |= a47.get() << 47;
    b |= b47.get() << 47;
    c |= c47.get() << 47;
    a |= a48.get() << 48;
    b |= b48.get() << 48;
    c |= c48.get() << 48;
    a |= a49.get() << 49;
    b |= b49.get() << 49;
    c |= c49.get() << 49;
    a |= a50.get() << 50;
    b |= b50.get() << 50;
    c |= c50.get() << 50;
    a |= a51.get() << 51;
    b |= b51.get() << 51;
    c |= c51.get() << 51;
    a |= a52.get() << 52;
    b |= b52.get() << 52;
    c |= c52.get() << 52;
    a |= a53.get() << 53;
    b |= b53.get() << 53;
    c |= c53.get() << 53;
    a |= a54.get() << 54;
    b |= b54.get() << 54;
    c |= c54.get() << 54;
    a |= a55.get() << 55;
    b |= b55.get() << 55;
    c |= c55.get() << 55;
    a |= a56.get() << 56;
    b |= b56.get() << 56;
    c |= c56.get() << 56;
    a |= a57.get() << 57;
    b |= b57.get() << 57;
    c |= c57.get() << 57;
    a |= a58.get() << 58;
    b |= b58.get() << 58;
    c |= c58.get() << 58;
    a |= a59.get() << 59;
    b |= b59.get() << 59;
    c |= c59.get() << 59;
    a |= a60.get() << 60;
    b |= b60.get() << 60;
    c |= c60.get() << 60;
    a |= a61.get() << 61;
    b |= b61.get() << 61;
    c |= c61.get() << 61;
    a |= a62.get() << 62;
    b |= b62.get() << 62;
    c |= c62.get() << 62;
    a |= a63.get() << 63;
    b |= b63.get() << 63;
    c |= c63.get() << 63;
    std::cout << std::hex << std::setfill('0') << std::setw(16) << a << ' ' << std::setw(16) << b
              << ' ' << std::setw(16) << c << std::endl;
}

co_void_t master(simulator_t &sim)
{
    sim.set(a0, 0);
    sim.set(a1, 0);
    sim.set(a2, 0);
    sim.set(a3, 0);
    sim.set(a4, 0);
    sim.set(a5, 0);
    sim.set(a6, 0);
    sim.set(a7, 0);
    sim.set(a8, 0);
    sim.set(a9, 0);
    sim.set(a10, 0);
    sim.set(a11, 0);
    sim.set(a12, 0);
    sim.set(a13, 0);
    sim.set(a14, 0);
    sim.set(a15, 0);
    sim.set(a16, 0);
    sim.set(a17, 0);
    sim.set(a18, 0);
    sim.set(a19, 0);
    sim.set(a20, 0);
    sim.set(a21, 0);
    sim.set(a22, 0);
    sim.set(a23, 0);
    sim.set(a24, 0);
    sim.set(a25, 0);
    sim.set(a26, 0);
    sim.set(a27, 0);
    sim.set(a28, 0);
    sim.set(a29, 0);
    sim.set(a30, 0);
    sim.set(a31, 0);
    sim.set(a32, 0);
    sim.set(a33, 0);
    sim.set(a34, 0);
    sim.set(a35, 0);
    sim.set(a36, 0);
    sim.set(a37, 0);
    sim.set(a38, 0);
    sim.set(a39, 0);
    sim.set(a40, 0);
    sim.set(a41, 0);
    sim.set(a42, 0);
    sim.set(a43, 0);
    sim.set(a44, 0);
    sim.set(a45, 0);
    sim.set(a46, 0);
    sim.set(a47, 0);
    sim.set(a48, 0);
    sim.set(a49, 0);
    sim.set(a50, 0);
    sim.set(a51, 0);
    sim.set(a52, 0);
    sim.set(a53, 0);
    sim.set(a54, 0);
    sim.set(a55, 0);
    sim.set(a56, 0);
    sim.set(a57, 0);
    sim.set(a58, 0);
    sim.set(a59, 0);
    sim.set(a60, 0);
    sim.set(a61, 0);
    sim.set(a62, 0);
    sim.set(a63, 0);
    co_await sim.delay(1);
    for (int i = 0; i < 30000; i++) {
        sim.set(a12, !c12.get());
        sim.set(a2, !c2.get());
        sim.set(a3, !c3.get());
        co_await sim.delay(1);
        sim.set(a32, !c32.get());
        sim.set(a56, !c56.get());
        sim.set(a57, !c57.get());
        co_await sim.delay(1);
        sim.set(a28, !c28.get());
        sim.set(a14, !c14.get());
        sim.set(a51, !c51.get());
        co_await sim.delay(1);
        sim.set(a57, !c57.get());
        sim.set(a34, !c34.get());
        co_await sim.delay(1);
        sim.set(a59, !c59.get());
        sim.set(a26, !c26.get());
        sim.set(a48, !c48.get());
        sim.set(a34, !c34.get());
        co_await sim.delay(1);
        sim.set(a19, !c19.get());
        sim.set(a48, !c48.get());
        sim.set(a2, !c2.get());
        sim.set(a35, !c35.get());
        sim.set(a9, !c9.get());
        sim.set(a9, !c9.get());
        sim.set(a28, !c28.get());
        sim.set(a12, !c12.get());
        sim.set(a9, !c9.get());
        sim.set(a37, !c37.get());
        sim.set(a31, !c31.get());
        sim.set(a17, !c17.get());
        sim.set(a8, !c8.get());
        sim.set(a28, !c28.get());
        sim.set(a44, !c44.get());
        sim.set(a22, !c22.get());
        co_await sim.delay(1);
        sim.set(a62, !c62.get());
        sim.set(a9, !c9.get());
        sim.set(a7, !c7.get());
        co_await sim.delay(1);
        sim.set(a18, !c18.get());
        co_await sim.delay(1);
        sim.set(a36, !c36.get());
        sim.set(a1, !c1.get());
        sim.set(a23, !c23.get());
        sim.set(a55, !c55.get());
        sim.set(a59, !c59.get());
        sim.set(a39, !c39.get());
        sim.set(a53, !c53.get());
        sim.set(a6, !c6.get());
        sim.set(a54, !c54.get());
        sim.set(a20, !c20.get());
        sim.set(a27, !c27.get());
        co_await sim.delay(1);
        sim.set(a8, !c8.get());
        co_await sim.delay(1);
        sim.set(a52, !c52.get());
        sim.set(a8, !c8.get());
        sim.set(a36, !c36.get());
        sim.set(a9, !c9.get());
        sim.set(a31, !c31.get());
        sim.set(a20, !c20.get());
        co_await sim.delay(1);
        sim.set(a6, !c6.get());
        sim.set(a45, !c45.get());
        sim.set(a41, !c41.get());
        sim.set(a29, !c29.get());
        sim.set(a13, !c13.get());
        co_await sim.delay(1);
        sim.set(a3, !c3.get());
        co_await sim.delay(1);
        sim.set(a52, !c52.get());
        sim.set(a51, !c51.get());
        sim.set(a61, !c61.get());
        sim.set(a24, !c24.get());
        sim.set(a40, !c40.get());
        sim.set(a55, !c55.get());
        sim.set(a14, !c14.get());
        sim.set(a3, !c3.get());
        sim.set(a18, !c18.get());
        sim.set(a51, !c51.get());
        sim.set(a18, !c18.get());
        sim.set(a20, !c20.get());
        sim.set(a18, !c18.get());
        sim.set(a0, !c0.get());
        co_await sim.delay(1);
        sim.set(a47, !c47.get());
        sim.set(a57, !c57.get());
        sim.set(a32, !c32.get());
        sim.set(a59, !c59.get());
        sim.set(a13, !c13.get());
        sim.set(a0, !c0.get());
        sim.set(a42, !c42.get());
        sim.set(a41, !c41.get());
        sim.set(a59, !c59.get());
        sim.set(a37, !c37.get());
        co_await sim.delay(1);
        sim.set(a56, !c56.get());
        sim.set(a33, !c33.get());
        sim.set(a6, !c6.get());
        sim.set(a18, !c18.get());
        sim.set(a61, !c61.get());
        sim.set(a31, !c31.get());
        sim.set(a29, !c29.get());
        sim.set(a45, !c45.get());
        sim.set(a31, !c31.get());
        sim.set(a12, !c12.get());
        sim.set(a16, !c16.get());
        sim.set(a32, !c32.get());
        sim.set(a7, !c7.get());
        sim.set(a26, !c26.get());
        sim.set(a9, !c9.get());
        sim.set(a32, !c32.get());
        sim.set(a38, !c38.get());
        co_await sim.delay(1);
        sim.set(a61, !c61.get());
        sim.set(a15, !c15.get());
        sim.set(a59, !c59.get());
        sim.set(a58, !c58.get());
        sim.set(a48, !c48.get());
        co_await sim.delay(1);
        sim.set(a54, !c54.get());
        sim.set(a36, !c36.get());
        sim.set(a54, !c54.get());
        sim.set(a63, !c63.get());
        sim.set(a63, !c63.get());
        sim.set(a29, !c29.get());
        sim.set(a59, !c59.get());
        co_await sim.delay(1);
        sim.set(a48, !c48.get());
        sim.set(a38, !c38.get());
        sim.set(a56, !c56.get());
        co_await sim.delay(1);
        sim.set(a15, !c15.get());
        co_await sim.delay(1);
        sim.set(a56, !c56.get());
        sim.set(a43, !c43.get());
        co_await sim.delay(1);
        sim.set(a43, !c43.get());
        co_await sim.delay(1);
        sim.set(a8, !c8.get());
        sim.set(a1, !c1.get());
        sim.set(a25, !c25.get());
        sim.set(a61, !c61.get());
        sim.set(a8, !c8.get());
        sim.set(a50, !c50.get());
        sim.set(a5, !c5.get());
        sim.set(a48, !c48.get());
        sim.set(a14, !c14.get());
        sim.set(a45, !c45.get());
        sim.set(a0, !c0.get());
        sim.set(a55, !c55.get());
        sim.set(a7, !c7.get());
        co_await sim.delay(1);
        sim.set(a0, !c0.get());
        sim.set(a50, !c50.get());
        sim.set(a25, !c25.get());
        sim.set(a53, !c53.get());
        co_await sim.delay(1);
        sim.set(a55, !c55.get());
        co_await sim.delay(1);
        sim.set(a51, !c51.get());
        sim.set(a26, !c26.get());
        sim.set(a31, !c31.get());
        sim.set(a36, !c36.get());
        sim.set(a35, !c35.get());
        sim.set(a16, !c16.get());
        sim.set(a5, !c5.get());
        sim.set(a62, !c62.get());
        sim.set(a40, !c40.get());
        sim.set(a12, !c12.get());
        sim.set(a25, !c25.get());
        co_await sim.delay(1);
        sim.set(a19, !c19.get());
        sim.set(a36, !c36.get());
        sim.set(a21, !c21.get());
        sim.set(a31, !c31.get());
        sim.set(a53, !c53.get());
        sim.set(a1, !c1.get());
        co_await sim.delay(1);
        sim.set(a50, !c50.get());
        sim.set(a22, !c22.get());
        sim.set(a4, !c4.get());
        sim.set(a36, !c36.get());
        sim.set(a12, !c12.get());
        co_await sim.delay(1);
        sim.set(a56, !c56.get());
        sim.set(a3, !c3.get());
        sim.set(a13, !c13.get());
        sim.set(a33, !c33.get());
        co_await sim.delay(1);
        sim.set(a16, !c16.get());
        sim.set(a17, !c17.get());
        sim.set(a1, !c1.get());
        co_await sim.delay(1);
        sim.set(a12, !c12.get());
        sim.set(a52, !c52.get());
        co_await sim.delay(1);
        sim.set(a7, !c7.get());
        sim.set(a3, !c3.get());
        co_await sim.delay(1);
        sim.set(a46, !c46.get());
        co_await sim.delay(1);
        sim.set(a17, !c17.get());
        sim.set(a8, !c8.get());
        sim.set(a49, !c49.get());
        sim.set(a59, !c59.get());
        sim.set(a63, !c63.get());
        co_await sim.delay(1);
        sim.set(a39, !c39.get());
        sim.set(a35, !c35.get());
        sim.set(a6, !c6.get());
        sim.set(a25, !c25.get());
        sim.set(a44, !c44.get());
        co_await sim.delay(1);
        sim.set(a46, !c46.get());
        sim.set(a43, !c43.get());
        sim.set(a12, !c12.get());
        sim.set(a61, !c61.get());
        sim.set(a41, !c41.get());
        sim.set(a54, !c54.get());
        sim.set(a16, !c16.get());
        sim.set(a4, !c4.get());
        sim.set(a57, !c57.get());
        sim.set(a29, !c29.get());
        sim.set(a9, !c9.get());
        co_await sim.delay(1);
        sim.set(a61, !c61.get());
        sim.set(a32, !c32.get());
        sim.set(a37, !c37.get());
        sim.set(a32, !c32.get());
        sim.set(a22, !c22.get());
        co_await sim.delay(1);
        sim.set(a33, !c33.get());
        sim.set(a7, !c7.get());
        sim.set(a6, !c6.get());
        co_await sim.delay(1);
        sim.set(a1, !c1.get());
        co_await sim.delay(1);
        sim.set(a33, !c33.get());
        sim.set(a11, !c11.get());
        sim.set(a17, !c17.get());
        co_await sim.delay(1);
        sim.set(a60, !c60.get());
        co_await sim.delay(1);
        sim.set(a0, !c0.get());
        sim.set(a22, !c22.get());
        sim.set(a3, !c3.get());
        sim.set(a41, !c41.get());
        sim.set(a41, !c41.get());
        sim.set(a8, !c8.get());
        sim.set(a58, !c58.get());
        sim.set(a25, !c25.get());
        sim.set(a22, !c22.get());
        co_await sim.delay(1);
        sim.set(a47, !c47.get());
        sim.set(a1, !c1.get());
        sim.set(a40, !c40.get());
        co_await sim.delay(1);
        sim.set(a48, !c48.get());
        sim.set(a6, !c6.get());
        co_await sim.delay(1);
        sim.set(a26, !c26.get());
        sim.set(a61, !c61.get());
        co_await sim.delay(1);
        sim.set(a54, !c54.get());
        sim.set(a21, !c21.get());
        sim.set(a42, !c42.get());
        sim.set(a12, !c12.get());
        sim.set(a21, !c21.get());
        co_await sim.delay(1);
        sim.set(a33, !c33.get());
        sim.set(a11, !c11.get());
        sim.set(a35, !c35.get());
        sim.set(a26, !c26.get());
        sim.set(a59, !c59.get());
        co_await sim.delay(1);
        sim.set(a16, !c16.get());
        sim.set(a56, !c56.get());
        co_await sim.delay(1);
        sim.set(a33, !c33.get());
        co_await sim.delay(1);
        sim.set(a44, !c44.get());
        sim.set(a60, !c60.get());
        sim.set(a48, !c48.get());
        sim.set(a57, !c57.get());
        sim.set(a28, !c28.get());
        sim.set(a47, !c47.get());
        sim.set(a61, !c61.get());
        co_await sim.delay(1);
        sim.set(a26, !c26.get());
        sim.set(a42, !c42.get());
        co_await sim.delay(1);
        sim.set(a2, !c2.get());
        sim.set(a59, !c59.get());
        sim.set(a8, !c8.get());
        co_await sim.delay(1);
        sim.set(a3, !c3.get());
        sim.set(a21, !c21.get());
        sim.set(a36, !c36.get());
        sim.set(a1, !c1.get());
        sim.set(a41, !c41.get());
        sim.set(a14, !c14.get());
        co_await sim.delay(1);
        sim.set(a50, !c50.get());
        sim.set(a37, !c37.get());
        sim.set(a45, !c45.get());
        sim.set(a7, !c7.get());
        sim.set(a4, !c4.get());
        co_await sim.delay(1);
        sim.set(a25, !c25.get());
        sim.set(a6, !c6.get());
        sim.set(a8, !c8.get());
        sim.set(a53, !c53.get());
        sim.set(a49, !c49.get());
        sim.set(a25, !c25.get());
        sim.set(a18, !c18.get());
        sim.set(a10, !c10.get());
        sim.set(a56, !c56.get());
        co_await sim.delay(1);
        sim.set(a26, !c26.get());
        sim.set(a32, !c32.get());
        co_await sim.delay(1);
        sim.set(a43, !c43.get());
        sim.set(a10, !c10.get());
        sim.set(a21, !c21.get());
        sim.set(a12, !c12.get());
        sim.set(a44, !c44.get());
        sim.set(a16, !c16.get());
        co_await sim.delay(1);
        sim.set(a59, !c59.get());
        sim.set(a12, !c12.get());
        co_await sim.delay(1);
        sim.set(a62, !c62.get());
        co_await sim.delay(1);
        sim.set(a46, !c46.get());
        sim.set(a43, !c43.get());
        sim.set(a26, !c26.get());
        sim.set(a27, !c27.get());
        sim.set(a36, !c36.get());
        sim.set(a62, !c62.get());
        sim.set(a29, !c29.get());
        sim.set(a32, !c32.get());
        sim.set(a46, !c46.get());
        sim.set(a44, !c44.get());
        sim.set(a9, !c9.get());
        sim.set(a3, !c3.get());
        sim.set(a36, !c36.get());
        sim.set(a40, !c40.get());
        sim.set(a61, !c61.get());
        sim.set(a54, !c54.get());
        co_await sim.delay(1);
        sim.set(a20, !c20.get());
        sim.set(a32, !c32.get());
        sim.set(a5, !c5.get());
        co_await sim.delay(1);
        sim.set(a10, !c10.get());
        co_await sim.delay(1);
        sim.set(a23, !c23.get());
        sim.set(a59, !c59.get());
        sim.set(a44, !c44.get());
        sim.set(a20, !c20.get());
        co_await sim.delay(1);
        sim.set(a57, !c57.get());
        sim.set(a34, !c34.get());
        sim.set(a19, !c19.get());
        sim.set(a2, !c2.get());
        sim.set(a31, !c31.get());
        sim.set(a25, !c25.get());
        sim.set(a31, !c31.get());
        sim.set(a31, !c31.get());
        co_await sim.delay(1);
        sim.set(a34, !c34.get());
        co_await sim.delay(1);
        sim.set(a37, !c37.get());
        sim.set(a58, !c58.get());
        co_await sim.delay(1);
        sim.set(a36, !c36.get());
        co_await sim.delay(1);
        sim.set(a29, !c29.get());
        sim.set(a12, !c12.get());
        sim.set(a0, !c0.get());
        sim.set(a18, !c18.get());
        sim.set(a43, !c43.get());
        sim.set(a6, !c6.get());
        sim.set(a24, !c24.get());
        sim.set(a31, !c31.get());
        sim.set(a58, !c58.get());
        co_await sim.delay(1);
        sim.set(a23, !c23.get());
        sim.set(a22, !c22.get());
        co_await sim.delay(1);
        sim.set(a19, !c19.get());
        sim.set(a8, !c8.get());
        sim.set(a56, !c56.get());
        co_await sim.delay(1);
        sim.set(a0, !c0.get());
        sim.set(a51, !c51.get());
        sim.set(a23, !c23.get());
        sim.set(a54, !c54.get());
        sim.set(a38, !c38.get());
        co_await sim.delay(1);
        sim.set(a15, !c15.get());
        sim.set(a61, !c61.get());
        co_await sim.delay(1);
        sim.set(a34, !c34.get());
        sim.set(a50, !c50.get());
        sim.set(a4, !c4.get());
        sim.set(a33, !c33.get());
        co_await sim.delay(1);
        sim.set(a19, !c19.get());
        sim.set(a5, !c5.get());
        sim.set(a19, !c19.get());
        sim.set(a43, !c43.get());
        sim.set(a20, !c20.get());
        sim.set(a40, !c40.get());
        sim.set(a2, !c2.get());
        co_await sim.delay(1);
        sim.set(a38, !c38.get());
        sim.set(a50, !c50.get());
        sim.set(a63, !c63.get());
        sim.set(a60, !c60.get());
        co_await sim.delay(1);
        sim.set(a11, !c11.get());
        sim.set(a5, !c5.get());
        sim.set(a49, !c49.get());
        sim.set(a47, !c47.get());
        co_await sim.delay(1);
        sim.set(a2, !c2.get());
        sim.set(a13, !c13.get());
        sim.set(a41, !c41.get());
        co_await sim.delay(1);
        sim.set(a32, !c32.get());
        sim.set(a61, !c61.get());
        sim.set(a40, !c40.get());
        sim.set(a52, !c52.get());
        co_await sim.delay(1);
        sim.set(a52, !c52.get());
        sim.set(a47, !c47.get());
        sim.set(a31, !c31.get());
        sim.set(a58, !c58.get());
        sim.set(a34, !c34.get());
        sim.set(a43, !c43.get());
        sim.set(a39, !c39.get());
        sim.set(a46, !c46.get());
        sim.set(a61, !c61.get());
        sim.set(a22, !c22.get());
        sim.set(a27, !c27.get());
        sim.set(a0, !c0.get());
        sim.set(a45, !c45.get());
        sim.set(a20, !c20.get());
        sim.set(a47, !c47.get());
        sim.set(a36, !c36.get());
        sim.set(a53, !c53.get());
        co_await sim.delay(1);
        sim.set(a40, !c40.get());
        co_await sim.delay(1);
        sim.set(a29, !c29.get());
        co_await sim.delay(1);
        sim.set(a62, !c62.get());
        sim.set(a53, !c53.get());
        co_await sim.delay(1);
        sim.set(a8, !c8.get());
        sim.set(a1, !c1.get());
        sim.set(a13, !c13.get());
        sim.set(a28, !c28.get());
        sim.set(a50, !c50.get());
        sim.set(a41, !c41.get());
        co_await sim.delay(1);
        sim.set(a48, !c48.get());
        sim.set(a18, !c18.get());
        sim.set(a28, !c28.get());
        sim.set(a13, !c13.get());
        sim.set(a54, !c54.get());
        sim.set(a4, !c4.get());
        sim.set(a2, !c2.get());
        sim.set(a60, !c60.get());
        co_await sim.delay(1);
        sim.set(a17, !c17.get());
        sim.set(a50, !c50.get());
        sim.set(a49, !c49.get());
        sim.set(a52, !c52.get());
        sim.set(a16, !c16.get());
        sim.set(a29, !c29.get());
        sim.set(a19, !c19.get());
        sim.set(a19, !c19.get());
        sim.set(a3, !c3.get());
        sim.set(a32, !c32.get());
        sim.set(a2, !c2.get());
        sim.set(a14, !c14.get());
        sim.set(a12, !c12.get());
        sim.set(a23, !c23.get());
        sim.set(a22, !c22.get());
        co_await sim.delay(1);
        sim.set(a16, !c16.get());
        sim.set(a40, !c40.get());
        sim.set(a50, !c50.get());
        sim.set(a41, !c41.get());
        sim.set(a45, !c45.get());
        sim.set(a19, !c19.get());
        sim.set(a2, !c2.get());
        sim.set(a59, !c59.get());
        sim.set(a0, !c0.get());
        sim.set(a17, !c17.get());
        sim.set(a60, !c60.get());
        sim.set(a54, !c54.get());
        sim.set(a44, !c44.get());
        sim.set(a18, !c18.get());
        sim.set(a13, !c13.get());
        sim.set(a55, !c55.get());
        sim.set(a19, !c19.get());
        sim.set(a0, !c0.get());
        sim.set(a10, !c10.get());
        sim.set(a37, !c37.get());
        sim.set(a19, !c19.get());
        co_await sim.delay(1);
        sim.set(a30, !c30.get());
        sim.set(a29, !c29.get());
        sim.set(a60, !c60.get());
        sim.set(a24, !c24.get());
        sim.set(a9, !c9.get());
        sim.set(a11, !c11.get());
        sim.set(a45, !c45.get());
        sim.set(a59, !c59.get());
        sim.set(a58, !c58.get());
        sim.set(a12, !c12.get());
        co_await sim.delay(1);
        sim.set(a6, !c6.get());
        co_await sim.delay(1);
        sim.set(a59, !c59.get());
        sim.set(a26, !c26.get());
        sim.set(a27, !c27.get());
        co_await sim.delay(1);
        sim.set(a23, !c23.get());
        sim.set(a50, !c50.get());
        sim.set(a30, !c30.get());
        sim.set(a42, !c42.get());
        sim.set(a24, !c24.get());
        co_await sim.delay(1);
        sim.set(a53, !c53.get());
        sim.set(a47, !c47.get());
        sim.set(a47, !c47.get());
        sim.set(a56, !c56.get());
        co_await sim.delay(1);
        sim.set(a19, !c19.get());
        co_await sim.delay(1);
        sim.set(a60, !c60.get());
        sim.set(a32, !c32.get());
        sim.set(a36, !c36.get());
        sim.set(a12, !c12.get());
        sim.set(a1, !c1.get());
        sim.set(a54, !c54.get());
        sim.set(a28, !c28.get());
        sim.set(a54, !c54.get());
        co_await sim.delay(1);
        sim.set(a47, !c47.get());
        sim.set(a3, !c3.get());
        sim.set(a22, !c22.get());
        sim.set(a46, !c46.get());
        co_await sim.delay(1);
        sim.set(a44, !c44.get());
        sim.set(a22, !c22.get());
        sim.set(a26, !c26.get());
        sim.set(a32, !c32.get());
        sim.set(a54, !c54.get());
        sim.set(a6, !c6.get());
        sim.set(a43, !c43.get());
        co_await sim.delay(1);
        sim.set(a40, !c40.get());
        sim.set(a47, !c47.get());
        sim.set(a43, !c43.get());
        co_await sim.delay(1);
        sim.set(a0, !c0.get());
        co_await sim.delay(1);
        sim.set(a25, !c25.get());
        sim.set(a20, !c20.get());
        co_await sim.delay(1);
        sim.set(a8, !c8.get());
        sim.set(a33, !c33.get());
        sim.set(a38, !c38.get());
        sim.set(a25, !c25.get());
        co_await sim.delay(1);
        sim.set(a23, !c23.get());
        co_await sim.delay(1);
        sim.set(a53, !c53.get());
        sim.set(a0, !c0.get());
        co_await sim.delay(1);
        sim.set(a4, !c4.get());
        sim.set(a0, !c0.get());
        sim.set(a7, !c7.get());
        sim.set(a31, !c31.get());
        sim.set(a63, !c63.get());
        sim.set(a45, !c45.get());
        sim.set(a28, !c28.get());
        co_await sim.delay(1);
        sim.set(a43, !c43.get());
        co_await sim.delay(1);
        sim.set(a0, !c0.get());
        sim.set(a39, !c39.get());
        co_await sim.delay(1);
        sim.set(a35, !c35.get());
        sim.set(a47, !c47.get());
        sim.set(a27, !c27.get());
        sim.set(a34, !c34.get());
        sim.set(a48, !c48.get());
        sim.set(a54, !c54.get());
        sim.set(a58, !c58.get());
        sim.set(a15, !c15.get());
        co_await sim.delay(1);
        sim.set(a18, !c18.get());
        sim.set(a48, !c48.get());
        sim.set(a8, !c8.get());
        sim.set(a35, !c35.get());
        sim.set(a14, !c14.get());
        sim.set(a4, !c4.get());
        sim.set(a8, !c8.get());
        sim.set(a17, !c17.get());
        sim.set(a45, !c45.get());
        sim.set(a45, !c45.get());
        co_await sim.delay(1);
        sim.set(a59, !c59.get());
        sim.set(a55, !c55.get());
        sim.set(a61, !c61.get());
        sim.set(a42, !c42.get());
        sim.set(a30, !c30.get());
        sim.set(a54, !c54.get());
        co_await sim.delay(1);
        sim.set(a16, !c16.get());
        sim.set(a23, !c23.get());
        co_await sim.delay(1);
        sim.set(a49, !c49.get());
        sim.set(a11, !c11.get());
        sim.set(a17, !c17.get());
        sim.set(a27, !c27.get());
        co_await sim.delay(1);
        sim.set(a40, !c40.get());
        sim.set(a19, !c19.get());
        sim.set(a18, !c18.get());
        sim.set(a20, !c20.get());
        sim.set(a19, !c19.get());
        sim.set(a1, !c1.get());
        sim.set(a19, !c19.get());
        sim.set(a14, !c14.get());
        sim.set(a62, !c62.get());
        sim.set(a41, !c41.get());
        co_await sim.delay(1);
        sim.set(a53, !c53.get());
        co_await sim.delay(1);
        sim.set(a5, !c5.get());
        sim.set(a58, !c58.get());
        sim.set(a10, !c10.get());
        sim.set(a39, !c39.get());
        sim.set(a59, !c59.get());
        sim.set(a50, !c50.get());
        co_await sim.delay(1);
        sim.set(a29, !c29.get());
        sim.set(a17, !c17.get());
        sim.set(a37, !c37.get());
        sim.set(a42, !c42.get());
        sim.set(a41, !c41.get());
        co_await sim.delay(1);
        sim.set(a6, !c6.get());
        sim.set(a5, !c5.get());
        sim.set(a1, !c1.get());
        sim.set(a59, !c59.get());
        co_await sim.delay(1);
        sim.set(a62, !c62.get());
        sim.set(a36, !c36.get());
        co_await sim.delay(1);
        sim.set(a3, !c3.get());
        co_await sim.delay(1);
        sim.set(a22, !c22.get());
        sim.set(a34, !c34.get());
        sim.set(a34, !c34.get());
        sim.set(a16, !c16.get());
        sim.set(a44, !c44.get());
        sim.set(a57, !c57.get());
        co_await sim.delay(1);
        sim.set(a5, !c5.get());
        co_await sim.delay(1);
        sim.set(a50, !c50.get());
        sim.set(a12, !c12.get());
        sim.set(a25, !c25.get());
        sim.set(a43, !c43.get());
        sim.set(a30, !c30.get());
        sim.set(a1, !c1.get());
        co_await sim.delay(1);
        sim.set(a31, !c31.get());
        sim.set(a11, !c11.get());
        sim.set(a58, !c58.get());
        co_await sim.delay(1);
        sim.set(a0, !c0.get());
        sim.set(a5, !c5.get());
        sim.set(a4, !c4.get());
        sim.set(a49, !c49.get());
        co_await sim.delay(1);
        sim.set(a30, !c30.get());
        sim.set(a27, !c27.get());
        sim.set(a14, !c14.get());
        sim.set(a52, !c52.get());
        sim.set(a55, !c55.get());
        sim.set(a37, !c37.get());
        sim.set(a41, !c41.get());
        sim.set(a10, !c10.get());
        sim.set(a48, !c48.get());
        sim.set(a5, !c5.get());
        co_await sim.delay(1);
        sim.set(a55, !c55.get());
        sim.set(a19, !c19.get());
        co_await sim.delay(1);
        sim.set(a30, !c30.get());
        sim.set(a4, !c4.get());
        sim.set(a45, !c45.get());
        sim.set(a4, !c4.get());
        sim.set(a46, !c46.get());
        co_await sim.delay(1);
        sim.set(a41, !c41.get());
        sim.set(a3, !c3.get());
        sim.set(a22, !c22.get());
        co_await sim.delay(1);
        sim.set(a57, !c57.get());
        sim.set(a5, !c5.get());
        sim.set(a36, !c36.get());
        sim.set(a8, !c8.get());
        sim.set(a45, !c45.get());
        sim.set(a30, !c30.get());
        sim.set(a61, !c61.get());
        co_await sim.delay(1);
        sim.set(a34, !c34.get());
        sim.set(a29, !c29.get());
        sim.set(a22, !c22.get());
        sim.set(a17, !c17.get());
        sim.set(a35, !c35.get());
        sim.set(a30, !c30.get());
        sim.set(a50, !c50.get());
        sim.set(a54, !c54.get());
        sim.set(a17, !c17.get());
        sim.set(a0, !c0.get());
        sim.set(a18, !c18.get());
        sim.set(a59, !c59.get());
        sim.set(a57, !c57.get());
        sim.set(a35, !c35.get());
        sim.set(a9, !c9.get());
        sim.set(a54, !c54.get());
        sim.set(a61, !c61.get());
        co_await sim.delay(1);
        sim.set(a36, !c36.get());
        sim.set(a45, !c45.get());
        co_await sim.delay(1);
        sim.set(a48, !c48.get());
        sim.set(a13, !c13.get());
        sim.set(a58, !c58.get());
        co_await sim.delay(1);
        sim.set(a7, !c7.get());
        sim.set(a23, !c23.get());
        sim.set(a9, !c9.get());
        co_await sim.delay(1);
        sim.set(a12, !c12.get());
        sim.set(a29, !c29.get());
        co_await sim.delay(1);
        sim.set(a29, !c29.get());
        sim.set(a0, !c0.get());
        sim.set(a60, !c60.get());
        sim.set(a0, !c0.get());
        sim.set(a43, !c43.get());
        sim.set(a5, !c5.get());
        co_await sim.delay(1);
        sim.set(a39, !c39.get());
        sim.set(a53, !c53.get());
        co_await sim.delay(1);
        sim.set(a53, !c53.get());
        sim.set(a9, !c9.get());
        co_await sim.delay(1);
        sim.set(a24, !c24.get());
        sim.set(a54, !c54.get());
        co_await sim.delay(1);
        sim.set(a52, !c52.get());
        sim.set(a16, !c16.get());
        sim.set(a45, !c45.get());
        sim.set(a4, !c4.get());
        sim.set(a46, !c46.get());
        sim.set(a55, !c55.get());
        co_await sim.delay(1);
        sim.set(a42, !c42.get());
        sim.set(a43, !c43.get());
        co_await sim.delay(1);
        sim.set(a60, !c60.get());
        sim.set(a52, !c52.get());
        sim.set(a16, !c16.get());
        sim.set(a11, !c11.get());
        sim.set(a36, !c36.get());
        sim.set(a32, !c32.get());
        sim.set(a44, !c44.get());
        sim.set(a59, !c59.get());
        co_await sim.delay(1);
        sim.set(a28, !c28.get());
        sim.set(a4, !c4.get());
        sim.set(a21, !c21.get());
        co_await sim.delay(1);
        sim.set(a3, !c3.get());
        co_await sim.delay(1);
        sim.set(a12, !c12.get());
        sim.set(a44, !c44.get());
        sim.set(a18, !c18.get());
        sim.set(a46, !c46.get());
        sim.set(a63, !c63.get());
        sim.set(a18, !c18.get());
        sim.set(a15, !c15.get());
        sim.set(a42, !c42.get());
        sim.set(a55, !c55.get());
        co_await sim.delay(1);
        sim.set(a59, !c59.get());
        sim.set(a24, !c24.get());
        sim.set(a58, !c58.get());
        co_await sim.delay(1);
        sim.set(a58, !c58.get());
        co_await sim.delay(1);
        sim.set(a37, !c37.get());
        sim.set(a55, !c55.get());
        sim.set(a25, !c25.get());
        sim.set(a20, !c20.get());
        co_await sim.delay(1);
        sim.set(a50, !c50.get());
        sim.set(a6, !c6.get());
        sim.set(a32, !c32.get());
        sim.set(a39, !c39.get());
        sim.set(a46, !c46.get());
        sim.set(a1, !c1.get());
        sim.set(a20, !c20.get());
        sim.set(a30, !c30.get());
        sim.set(a26, !c26.get());
        sim.set(a14, !c14.get());
        sim.set(a50, !c50.get());
        sim.set(a15, !c15.get());
        co_await sim.delay(1);
        sim.set(a59, !c59.get());
        sim.set(a60, !c60.get());
        sim.set(a45, !c45.get());
        sim.set(a18, !c18.get());
        co_await sim.delay(1);
        sim.set(a59, !c59.get());
        sim.set(a29, !c29.get());
        co_await sim.delay(1);
        sim.set(a4, !c4.get());
        sim.set(a22, !c22.get());
        co_await sim.delay(1);
        sim.set(a4, !c4.get());
        sim.set(a5, !c5.get());
        sim.set(a62, !c62.get());
        sim.set(a35, !c35.get());
        sim.set(a46, !c46.get());
        co_await sim.delay(1);
        sim.set(a49, !c49.get());
        co_await sim.delay(1);
        sim.set(a4, !c4.get());
        co_await sim.delay(1);
        sim.set(a42, !c42.get());
        sim.set(a60, !c60.get());
        sim.set(a61, !c61.get());
        sim.set(a11, !c11.get());
        sim.set(a53, !c53.get());
        sim.set(a3, !c3.get());
        sim.set(a32, !c32.get());
        sim.set(a28, !c28.get());
        sim.set(a62, !c62.get());
        sim.set(a31, !c31.get());
        sim.set(a34, !c34.get());
        co_await sim.delay(1);
        sim.set(a33, !c33.get());
        co_await sim.delay(1);
        sim.set(a48, !c48.get());
        sim.set(a13, !c13.get());
        sim.set(a12, !c12.get());
        sim.set(a39, !c39.get());
        sim.set(a54, !c54.get());
        sim.set(a62, !c62.get());
        sim.set(a31, !c31.get());
        sim.set(a29, !c29.get());
        sim.set(a31, !c31.get());
        sim.set(a16, !c16.get());
        sim.set(a17, !c17.get());
        sim.set(a11, !c11.get());
        sim.set(a42, !c42.get());
        sim.set(a43, !c43.get());
        sim.set(a26, !c26.get());
        sim.set(a34, !c34.get());
        sim.set(a61, !c61.get());
        sim.set(a10, !c10.get());
        sim.set(a62, !c62.get());
        sim.set(a44, !c44.get());
        sim.set(a9, !c9.get());
        co_await sim.delay(1);
        sim.set(a36, !c36.get());
        sim.set(a40, !c40.get());
        sim.set(a59, !c59.get());
        sim.set(a6, !c6.get());
        sim.set(a44, !c44.get());
        sim.set(a11, !c11.get());
        sim.set(a12, !c12.get());
        sim.set(a28, !c28.get());
        co_await sim.delay(1);
        sim.set(a4, !c4.get());
        sim.set(a20, !c20.get());
        sim.set(a23, !c23.get());
        sim.set(a28, !c28.get());
        sim.set(a32, !c32.get());
        co_await sim.delay(1);
        sim.set(a5, !c5.get());
        co_await sim.delay(1);
        sim.set(a2, !c2.get());
        co_await sim.delay(1);
        sim.set(a18, !c18.get());
        sim.set(a37, !c37.get());
        co_await sim.delay(1);
        sim.set(a63, !c63.get());
        sim.set(a56, !c56.get());
        sim.set(a42, !c42.get());
        sim.set(a10, !c10.get());
        sim.set(a57, !c57.get());
        sim.set(a56, !c56.get());
        co_await sim.delay(1);
        sim.set(a9, !c9.get());
        co_await sim.delay(1);
        sim.set(a55, !c55.get());
        sim.set(a47, !c47.get());
        co_await sim.delay(1);
        sim.set(a33, !c33.get());
        sim.set(a53, !c53.get());
        sim.set(a12, !c12.get());
        sim.set(a57, !c57.get());
        sim.set(a57, !c57.get());
        sim.set(a58, !c58.get());
        sim.set(a2, !c2.get());
        sim.set(a34, !c34.get());
        sim.set(a8, !c8.get());
        sim.set(a34, !c34.get());
        co_await sim.delay(1);
        sim.set(a27, !c27.get());
        sim.set(a34, !c34.get());
        sim.set(a33, !c33.get());
        co_await sim.delay(1);
        sim.set(a51, !c51.get());
        sim.set(a61, !c61.get());
        sim.set(a42, !c42.get());
        co_await sim.delay(1);
        sim.set(a40, !c40.get());
        sim.set(a21, !c21.get());
        sim.set(a54, !c54.get());
        sim.set(a37, !c37.get());
        sim.set(a9, !c9.get());
        sim.set(a42, !c42.get());
        sim.set(a22, !c22.get());
        sim.set(a1, !c1.get());
        sim.set(a34, !c34.get());
        co_await sim.delay(1);
        sim.set(a56, !c56.get());
        sim.set(a14, !c14.get());
        sim.set(a22, !c22.get());
        sim.set(a61, !c61.get());
        sim.set(a30, !c30.get());
        sim.set(a36, !c36.get());
        sim.set(a57, !c57.get());
        sim.set(a38, !c38.get());
        sim.set(a53, !c53.get());
        co_await sim.delay(1);
        sim.set(a0, !c0.get());
        sim.set(a26, !c26.get());
        sim.set(a30, !c30.get());
        sim.set(a8, !c8.get());
        co_await sim.delay(1);
        sim.set(a27, !c27.get());
        sim.set(a26, !c26.get());
        sim.set(a55, !c55.get());
        sim.set(a28, !c28.get());
        sim.set(a5, !c5.get());
        sim.set(a40, !c40.get());
        sim.set(a40, !c40.get());
        sim.set(a30, !c30.get());
        sim.set(a60, !c60.get());
        co_await sim.delay(1);
        sim.set(a47, !c47.get());
        co_await sim.delay(1);
        sim.set(a27, !c27.get());
        sim.set(a18, !c18.get());
        sim.set(a49, !c49.get());
        sim.set(a16, !c16.get());
        co_await sim.delay(1);
        sim.set(a29, !c29.get());
        sim.set(a22, !c22.get());
        sim.set(a10, !c10.get());
        sim.set(a54, !c54.get());
        sim.set(a46, !c46.get());
        co_await sim.delay(1);
        sim.set(a47, !c47.get());
        sim.set(a46, !c46.get());
        sim.set(a14, !c14.get());
        sim.set(a45, !c45.get());
        sim.set(a10, !c10.get());
        sim.set(a39, !c39.get());
        sim.set(a18, !c18.get());
        co_await sim.delay(1);
        sim.set(a12, !c12.get());
        co_await sim.delay(1);
        sim.set(a59, !c59.get());
        sim.set(a0, !c0.get());
        sim.set(a14, !c14.get());
        sim.set(a60, !c60.get());
        co_await sim.delay(1);
        sim.set(a5, !c5.get());
        sim.set(a40, !c40.get());
        sim.set(a29, !c29.get());
        sim.set(a43, !c43.get());
        sim.set(a26, !c26.get());
        sim.set(a19, !c19.get());
        sim.set(a7, !c7.get());
        sim.set(a53, !c53.get());
        sim.set(a62, !c62.get());
        sim.set(a57, !c57.get());
        co_await sim.delay(1);
        sim.set(a4, !c4.get());
        sim.set(a43, !c43.get());
        sim.set(a51, !c51.get());
        sim.set(a59, !c59.get());
        co_await sim.delay(1);
        sim.set(a30, !c30.get());
        sim.set(a6, !c6.get());
        sim.set(a43, !c43.get());
        sim.set(a53, !c53.get());
        sim.set(a60, !c60.get());
        co_await sim.delay(1);
        sim.set(a32, !c32.get());
        co_await sim.delay(1);
        sim.set(a2, !c2.get());
        sim.set(a21, !c21.get());
        co_await sim.delay(1);
        sim.set(a45, !c45.get());
        sim.set(a46, !c46.get());
        sim.set(a11, !c11.get());
        sim.set(a49, !c49.get());
        sim.set(a27, !c27.get());
        sim.set(a7, !c7.get());
        sim.set(a5, !c5.get());
        sim.set(a15, !c15.get());
        sim.set(a60, !c60.get());
        sim.set(a57, !c57.get());
        sim.set(a53, !c53.get());
        co_await sim.delay(1);
        sim.set(a2, !c2.get());
        sim.set(a56, !c56.get());
        co_await sim.delay(1);
        sim.set(a45, !c45.get());
        sim.set(a8, !c8.get());
        sim.set(a23, !c23.get());
        sim.set(a16, !c16.get());
        sim.set(a32, !c32.get());
        sim.set(a47, !c47.get());
        co_await sim.delay(1);
        sim.set(a5, !c5.get());
        co_await sim.delay(1);
        sim.set(a6, !c6.get());
        sim.set(a47, !c47.get());
        sim.set(a49, !c49.get());
        sim.set(a39, !c39.get());
        sim.set(a36, !c36.get());
        sim.set(a17, !c17.get());
        co_await sim.delay(1);
        sim.set(a47, !c47.get());
        co_await sim.delay(1);
        sim.set(a48, !c48.get());
        sim.set(a45, !c45.get());
        sim.set(a62, !c62.get());
        co_await sim.delay(1);
        sim.set(a37, !c37.get());
        co_await sim.delay(1);
        sim.set(a14, !c14.get());
        sim.set(a52, !c52.get());
        sim.set(a57, !c57.get());
        sim.set(a57, !c57.get());
        sim.set(a7, !c7.get());
        sim.set(a43, !c43.get());
        sim.set(a21, !c21.get());
        co_await sim.delay(1);
        sim.set(a8, !c8.get());
        sim.set(a57, !c57.get());
        sim.set(a18, !c18.get());
        co_await sim.delay(1);
        sim.set(a39, !c39.get());
        sim.set(a14, !c14.get());
        co_await sim.delay(1);
        sim.set(a19, !c19.get());
        sim.set(a45, !c45.get());
        sim.set(a4, !c4.get());
        sim.set(a18, !c18.get());
        co_await sim.delay(1);
        sim.set(a20, !c20.get());
        sim.set(a27, !c27.get());
        sim.set(a9, !c9.get());
        sim.set(a2, !c2.get());
        sim.set(a31, !c31.get());
        sim.set(a8, !c8.get());
        sim.set(a29, !c29.get());
        sim.set(a32, !c32.get());
        co_await sim.delay(1);
        sim.set(a27, !c27.get());
        sim.set(a22, !c22.get());
        sim.set(a1, !c1.get());
        sim.set(a23, !c23.get());
        sim.set(a58, !c58.get());
        sim.set(a24, !c24.get());
        sim.set(a43, !c43.get());
        sim.set(a17, !c17.get());
        sim.set(a14, !c14.get());
        co_await sim.delay(1);
        sim.set(a56, !c56.get());
        sim.set(a47, !c47.get());
        sim.set(a7, !c7.get());
        sim.set(a31, !c31.get());
        sim.set(a19, !c19.get());
        sim.set(a1, !c1.get());
        sim.set(a60, !c60.get());
        sim.set(a12, !c12.get());
        sim.set(a47, !c47.get());
        sim.set(a57, !c57.get());
        sim.set(a63, !c63.get());
        sim.set(a34, !c34.get());
        sim.set(a60, !c60.get());
        co_await sim.delay(1);
        sim.set(a32, !c32.get());
        sim.set(a55, !c55.get());
        sim.set(a27, !c27.get());
        sim.set(a39, !c39.get());
        sim.set(a55, !c55.get());
        sim.set(a22, !c22.get());
        sim.set(a36, !c36.get());
        sim.set(a30, !c30.get());
        co_await sim.delay(1);
        sim.set(a15, !c15.get());
        sim.set(a5, !c5.get());
        sim.set(a12, !c12.get());
        sim.set(a45, !c45.get());
        co_await sim.delay(1);
        sim.set(a13, !c13.get());
        sim.set(a37, !c37.get());
        sim.set(a7, !c7.get());
        sim.set(a18, !c18.get());
        sim.set(a29, !c29.get());
        co_await sim.delay(1);
        sim.set(a32, !c32.get());
        sim.set(a26, !c26.get());
        sim.set(a17, !c17.get());
        sim.set(a54, !c54.get());
        sim.set(a36, !c36.get());
        sim.set(a24, !c24.get());
        sim.set(a49, !c49.get());
        sim.set(a60, !c60.get());
        sim.set(a59, !c59.get());
        sim.set(a27, !c27.get());
        sim.set(a22, !c22.get());
        sim.set(a11, !c11.get());
        sim.set(a17, !c17.get());
        co_await sim.delay(1);
        sim.set(a40, !c40.get());
        sim.set(a57, !c57.get());
        sim.set(a11, !c11.get());
        co_await sim.delay(1);
        sim.set(a35, !c35.get());
        sim.set(a51, !c51.get());
        sim.set(a22, !c22.get());
        sim.set(a2, !c2.get());
        sim.set(a50, !c50.get());
        sim.set(a3, !c3.get());
        sim.set(a53, !c53.get());
        sim.set(a34, !c34.get());
        sim.set(a54, !c54.get());
        sim.set(a15, !c15.get());
        sim.set(a34, !c34.get());
        co_await sim.delay(1);
        sim.set(a41, !c41.get());
        co_await sim.delay(1);
        sim.set(a6, !c6.get());
        sim.set(a31, !c31.get());
        sim.set(a20, !c20.get());
        sim.set(a25, !c25.get());
        sim.set(a45, !c45.get());
        sim.set(a56, !c56.get());
        sim.set(a29, !c29.get());
        co_await sim.delay(1);
        sim.set(a52, !c52.get());
        co_await sim.delay(1);
        sim.set(a29, !c29.get());
        sim.set(a57, !c57.get());
        sim.set(a13, !c13.get());
        co_await sim.delay(1);
        sim.set(a61, !c61.get());
        sim.set(a35, !c35.get());
        sim.set(a18, !c18.get());
        sim.set(a45, !c45.get());
        sim.set(a52, !c52.get());
        sim.set(a20, !c20.get());
        co_await sim.delay(1);
        sim.set(a54, !c54.get());
        sim.set(a43, !c43.get());
        sim.set(a56, !c56.get());
        sim.set(a32, !c32.get());
        sim.set(a14, !c14.get());
        sim.set(a51, !c51.get());
        co_await sim.delay(1);
        sim.set(a10, !c10.get());
        sim.set(a57, !c57.get());
        sim.set(a18, !c18.get());
        sim.set(a62, !c62.get());
        co_await sim.delay(1);
        sim.set(a34, !c34.get());
        sim.set(a11, !c11.get());
        co_await sim.delay(1);
        sim.set(a51, !c51.get());
        sim.set(a63, !c63.get());
        co_await sim.delay(1);
        sim.set(a43, !c43.get());
        sim.set(a7, !c7.get());
        sim.set(a12, !c12.get());
        sim.set(a37, !c37.get());
        sim.set(a6, !c6.get());
        sim.set(a18, !c18.get());
        sim.set(a44, !c44.get());
        sim.set(a11, !c11.get());
        sim.set(a7, !c7.get());
        sim.set(a25, !c25.get());
        sim.set(a8, !c8.get());
        sim.set(a14, !c14.get());
        sim.set(a52, !c52.get());
        sim.set(a24, !c24.get());
        sim.set(a32, !c32.get());
        co_await sim.delay(1);
        sim.set(a21, !c21.get());
        sim.set(a50, !c50.get());
        co_await sim.delay(1);
        sim.set(a21, !c21.get());
        sim.set(a47, !c47.get());
        sim.set(a10, !c10.get());
        sim.set(a26, !c26.get());
        sim.set(a23, !c23.get());
        co_await sim.delay(1);
        sim.set(a26, !c26.get());
        sim.set(a10, !c10.get());
        sim.set(a1, !c1.get());
        sim.set(a39, !c39.get());
        co_await sim.delay(1);
        sim.set(a31, !c31.get());
        sim.set(a40, !c40.get());
        sim.set(a8, !c8.get());
        sim.set(a37, !c37.get());
        sim.set(a49, !c49.get());
        sim.set(a53, !c53.get());
        sim.set(a52, !c52.get());
        sim.set(a30, !c30.get());
        sim.set(a24, !c24.get());
        sim.set(a28, !c28.get());
        sim.set(a9, !c9.get());
        sim.set(a41, !c41.get());
        sim.set(a15, !c15.get());
        sim.set(a60, !c60.get());
        co_await sim.delay(1);
        sim.set(a31, !c31.get());
        co_await sim.delay(1);
        sim.set(a32, !c32.get());
        sim.set(a42, !c42.get());
        sim.set(a60, !c60.get());
        sim.set(a18, !c18.get());
        sim.set(a11, !c11.get());
        sim.set(a37, !c37.get());
        co_await sim.delay(1);
        sim.set(a11, !c11.get());
        sim.set(a25, !c25.get());
        sim.set(a52, !c52.get());
        sim.set(a13, !c13.get());
        sim.set(a62, !c62.get());
        sim.set(a7, !c7.get());
        sim.set(a25, !c25.get());
        sim.set(a17, !c17.get());
        co_await sim.delay(1);
        sim.set(a15, !c15.get());
        sim.set(a10, !c10.get());
        sim.set(a38, !c38.get());
        sim.set(a33, !c33.get());
        co_await sim.delay(1);
        sim.set(a38, !c38.get());
        sim.set(a1, !c1.get());
        sim.set(a60, !c60.get());
        co_await sim.delay(1);
        sim.set(a36, !c36.get());
        co_await sim.delay(1);
        sim.set(a11, !c11.get());
        co_await sim.delay(1);
        sim.set(a47, !c47.get());
        sim.set(a56, !c56.get());
        sim.set(a35, !c35.get());
        sim.set(a42, !c42.get());
        sim.set(a59, !c59.get());
        sim.set(a34, !c34.get());
        sim.set(a43, !c43.get());
        sim.set(a54, !c54.get());
        sim.set(a25, !c25.get());
        co_await sim.delay(1);
        sim.set(a54, !c54.get());
        sim.set(a22, !c22.get());
        sim.set(a14, !c14.get());
        sim.set(a28, !c28.get());
        co_await sim.delay(1);
        sim.set(a22, !c22.get());
        sim.set(a60, !c60.get());
        sim.set(a29, !c29.get());
        co_await sim.delay(1);
        sim.set(a31, !c31.get());
        co_await sim.delay(1);
        sim.set(a57, !c57.get());
        sim.set(a54, !c54.get());
        sim.set(a56, !c56.get());
        co_await sim.delay(1);
        sim.set(a54, !c54.get());
        co_await sim.delay(1);
        sim.set(a2, !c2.get());
        sim.set(a40, !c40.get());
        sim.set(a23, !c23.get());
        sim.set(a30, !c30.get());
        sim.set(a45, !c45.get());
        co_await sim.delay(1);
        sim.set(a51, !c51.get());
        sim.set(a14, !c14.get());
        sim.set(a16, !c16.get());
        co_await sim.delay(1);
        sim.set(a6, !c6.get());
        co_await sim.delay(1);
        sim.set(a28, !c28.get());
        sim.set(a23, !c23.get());
        co_await sim.delay(1);
        sim.set(a33, !c33.get());
        sim.set(a37, !c37.get());
        sim.set(a55, !c55.get());
        sim.set(a56, !c56.get());
        sim.set(a34, !c34.get());
        co_await sim.delay(1);
        sim.set(a49, !c49.get());
        sim.set(a45, !c45.get());
        sim.set(a31, !c31.get());
        co_await sim.delay(1);
        sim.set(a56, !c56.get());
        sim.set(a62, !c62.get());
        co_await sim.delay(1);
        sim.set(a29, !c29.get());
        sim.set(a16, !c16.get());
        sim.set(a11, !c11.get());
        sim.set(a37, !c37.get());
        sim.set(a15, !c15.get());
        sim.set(a47, !c47.get());
        sim.set(a48, !c48.get());
        sim.set(a5, !c5.get());
        sim.set(a42, !c42.get());
        co_await sim.delay(1);
        sim.set(a23, !c23.get());
        co_await sim.delay(1);
        sim.set(a5, !c5.get());
        sim.set(a38, !c38.get());
        co_await sim.delay(1);
        sim.set(a8, !c8.get());
        sim.set(a29, !c29.get());
        sim.set(a8, !c8.get());
        sim.set(a46, !c46.get());
        sim.set(a29, !c29.get());
        sim.set(a60, !c60.get());
        sim.set(a54, !c54.get());
        sim.set(a37, !c37.get());
        co_await sim.delay(1);
        sim.set(a55, !c55.get());
        sim.set(a12, !c12.get());
        sim.set(a5, !c5.get());
        sim.set(a6, !c6.get());
        co_await sim.delay(1);
        sim.set(a2, !c2.get());
        co_await sim.delay(1);
        sim.set(a25, !c25.get());
        sim.set(a7, !c7.get());
        sim.set(a57, !c57.get());
        sim.set(a42, !c42.get());
        sim.set(a13, !c13.get());
        sim.set(a35, !c35.get());
        sim.set(a59, !c59.get());
        sim.set(a53, !c53.get());
        sim.set(a16, !c16.get());
        sim.set(a6, !c6.get());
        sim.set(a50, !c50.get());
        sim.set(a61, !c61.get());
        sim.set(a10, !c10.get());
        sim.set(a19, !c19.get());
        sim.set(a11, !c11.get());
        sim.set(a49, !c49.get());
        co_await sim.delay(1);
        sim.set(a29, !c29.get());
        sim.set(a15, !c15.get());
        sim.set(a14, !c14.get());
        sim.set(a20, !c20.get());
        sim.set(a29, !c29.get());
        sim.set(a47, !c47.get());
        sim.set(a26, !c26.get());
        co_await sim.delay(1);
        sim.set(a48, !c48.get());
        sim.set(a18, !c18.get());
        co_await sim.delay(1);
        sim.set(a46, !c46.get());
        sim.set(a45, !c45.get());
        sim.set(a15, !c15.get());
        sim.set(a21, !c21.get());
        co_await sim.delay(1);
        sim.set(a61, !c61.get());
        co_await sim.delay(1);
        sim.set(a20, !c20.get());
        sim.set(a12, !c12.get());
        sim.set(a0, !c0.get());
        sim.set(a21, !c21.get());
        sim.set(a31, !c31.get());
        sim.set(a42, !c42.get());
        sim.set(a41, !c41.get());
        sim.set(a56, !c56.get());
        sim.set(a17, !c17.get());
        sim.set(a34, !c34.get());
        sim.set(a37, !c37.get());
        sim.set(a34, !c34.get());
        sim.set(a16, !c16.get());
        co_await sim.delay(1);
        sim.set(a11, !c11.get());
        sim.set(a3, !c3.get());
        sim.set(a33, !c33.get());
        sim.set(a34, !c34.get());
        co_await sim.delay(1);
        sim.set(a41, !c41.get());
        sim.set(a54, !c54.get());
        sim.set(a23, !c23.get());
        sim.set(a12, !c12.get());
        sim.set(a3, !c3.get());
        sim.set(a56, !c56.get());
        sim.set(a49, !c49.get());
        sim.set(a47, !c47.get());
        co_await sim.delay(1);
        sim.set(a46, !c46.get());
        sim.set(a62, !c62.get());
        sim.set(a62, !c62.get());
        sim.set(a53, !c53.get());
        sim.set(a55, !c55.get());
        sim.set(a62, !c62.get());
        sim.set(a12, !c12.get());
        sim.set(a55, !c55.get());
        sim.set(a14, !c14.get());
        sim.set(a20, !c20.get());
        sim.set(a4, !c4.get());
        sim.set(a22, !c22.get());
        sim.set(a15, !c15.get());
        sim.set(a29, !c29.get());
        sim.set(a46, !c46.get());
        sim.set(a33, !c33.get());
        co_await sim.delay(1);
        sim.set(a41, !c41.get());
        sim.set(a59, !c59.get());
        sim.set(a57, !c57.get());
        sim.set(a3, !c3.get());
        sim.set(a45, !c45.get());
        co_await sim.delay(1);
        sim.set(a46, !c46.get());
        sim.set(a11, !c11.get());
        sim.set(a26, !c26.get());
        sim.set(a28, !c28.get());
        sim.set(a10, !c10.get());
        sim.set(a63, !c63.get());
        co_await sim.delay(1);
        sim.set(a18, !c18.get());
        co_await sim.delay(1);
        sim.set(a10, !c10.get());
        co_await sim.delay(1);
        sim.set(a45, !c45.get());
        sim.set(a9, !c9.get());
        sim.set(a28, !c28.get());
        sim.set(a14, !c14.get());
        sim.set(a20, !c20.get());
        sim.set(a10, !c10.get());
        co_await sim.delay(1);
        sim.set(a59, !c59.get());
        sim.set(a11, !c11.get());
        sim.set(a52, !c52.get());
        co_await sim.delay(1);
        sim.set(a38, !c38.get());
        sim.set(a39, !c39.get());
        co_await sim.delay(1);
        sim.set(a10, !c10.get());
        sim.set(a10, !c10.get());
        sim.set(a32, !c32.get());
        sim.set(a12, !c12.get());
        sim.set(a1, !c1.get());
        sim.set(a16, !c16.get());
        sim.set(a5, !c5.get());
        co_await sim.delay(1);
        sim.set(a48, !c48.get());
        sim.set(a16, !c16.get());
        co_await sim.delay(1);
        sim.set(a55, !c55.get());
        sim.set(a11, !c11.get());
        sim.set(a46, !c46.get());
        sim.set(a28, !c28.get());
        sim.set(a35, !c35.get());
        sim.set(a48, !c48.get());
        sim.set(a47, !c47.get());
        sim.set(a33, !c33.get());
        sim.set(a39, !c39.get());
        sim.set(a15, !c15.get());
        sim.set(a38, !c38.get());
        sim.set(a24, !c24.get());
        sim.set(a34, !c34.get());
        co_await sim.delay(1);
        sim.set(a16, !c16.get());
        sim.set(a44, !c44.get());
        sim.set(a58, !c58.get());
        sim.set(a56, !c56.get());
        sim.set(a11, !c11.get());
        sim.set(a19, !c19.get());
        sim.set(a8, !c8.get());
        co_await sim.delay(1);
        sim.set(a13, !c13.get());
        sim.set(a14, !c14.get());
        sim.set(a34, !c34.get());
        sim.set(a0, !c0.get());
        sim.set(a22, !c22.get());
        sim.set(a22, !c22.get());
        sim.set(a32, !c32.get());
        co_await sim.delay(1);
        sim.set(a50, !c50.get());
        sim.set(a59, !c59.get());
        sim.set(a14, !c14.get());
        sim.set(a36, !c36.get());
        sim.set(a49, !c49.get());
        sim.set(a43, !c43.get());
        sim.set(a50, !c50.get());
        sim.set(a9, !c9.get());
        sim.set(a54, !c54.get());
        sim.set(a13, !c13.get());
        co_await sim.delay(1);
        sim.set(a5, !c5.get());
        sim.set(a3, !c3.get());
        sim.set(a30, !c30.get());
        sim.set(a51, !c51.get());
        sim.set(a16, !c16.get());
        co_await sim.delay(1);
        sim.set(a32, !c32.get());
        sim.set(a22, !c22.get());
        sim.set(a59, !c59.get());
        co_await sim.delay(1);
        sim.set(a1, !c1.get());
        co_await sim.delay(1);
        sim.set(a13, !c13.get());
        co_await sim.delay(1);
        sim.set(a55, !c55.get());
        co_await sim.delay(1);
        sim.set(a24, !c24.get());
        sim.set(a2, !c2.get());
        co_await sim.delay(1);
        sim.set(a47, !c47.get());
        sim.set(a60, !c60.get());
        co_await sim.delay(1);
        sim.set(a37, !c37.get());
        sim.set(a6, !c6.get());
        sim.set(a48, !c48.get());
        sim.set(a39, !c39.get());
        sim.set(a35, !c35.get());
        co_await sim.delay(1);
        sim.set(a18, !c18.get());
        sim.set(a36, !c36.get());
        co_await sim.delay(1);
        sim.set(a47, !c47.get());
        sim.set(a6, !c6.get());
        sim.set(a54, !c54.get());
        sim.set(a4, !c4.get());
        sim.set(a33, !c33.get());
        co_await sim.delay(1);
        sim.set(a19, !c19.get());
        sim.set(a44, !c44.get());
        sim.set(a49, !c49.get());
        co_await sim.delay(1);
        sim.set(a57, !c57.get());
        sim.set(a20, !c20.get());
        sim.set(a6, !c6.get());
        sim.set(a43, !c43.get());
        sim.set(a3, !c3.get());
        sim.set(a53, !c53.get());
        sim.set(a48, !c48.get());
        sim.set(a52, !c52.get());
        sim.set(a11, !c11.get());
        sim.set(a63, !c63.get());
        sim.set(a21, !c21.get());
        co_await sim.delay(1);
        sim.set(a28, !c28.get());
        sim.set(a7, !c7.get());
        sim.set(a51, !c51.get());
        co_await sim.delay(1);
        sim.set(a9, !c9.get());
        co_await sim.delay(1);
        sim.set(a44, !c44.get());
        sim.set(a3, !c3.get());
        co_await sim.delay(1);
        sim.set(a8, !c8.get());
        co_await sim.delay(1);
        sim.set(a10, !c10.get());
        co_await sim.delay(1);
        sim.set(a57, !c57.get());
        sim.set(a2, !c2.get());
        sim.set(a38, !c38.get());
        co_await sim.delay(1);
        sim.set(a52, !c52.get());
        sim.set(a56, !c56.get());
        sim.set(a63, !c63.get());
        co_await sim.delay(1);
        sim.set(a54, !c54.get());
        sim.set(a45, !c45.get());
        co_await sim.delay(1);
        sim.set(a26, !c26.get());
        sim.set(a33, !c33.get());
        sim.set(a42, !c42.get());
        sim.set(a38, !c38.get());
        co_await sim.delay(1);
        sim.set(a63, !c63.get());
        sim.set(a2, !c2.get());
        sim.set(a8, !c8.get());
        sim.set(a2, !c2.get());
        sim.set(a9, !c9.get());
        sim.set(a44, !c44.get());
        sim.set(a38, !c38.get());
        sim.set(a60, !c60.get());
        sim.set(a23, !c23.get());
        sim.set(a61, !c61.get());
        sim.set(a18, !c18.get());
        sim.set(a46, !c46.get());
        sim.set(a6, !c6.get());
        sim.set(a39, !c39.get());
        co_await sim.delay(1);
        sim.set(a56, !c56.get());
        co_await sim.delay(1);
        sim.set(a46, !c46.get());
        sim.set(a57, !c57.get());
        sim.set(a20, !c20.get());
        sim.set(a49, !c49.get());
        co_await sim.delay(1);
        sim.set(a30, !c30.get());
        sim.set(a41, !c41.get());
        co_await sim.delay(1);
        sim.set(a60, !c60.get());
        sim.set(a58, !c58.get());
        co_await sim.delay(1);
        sim.set(a9, !c9.get());
        sim.set(a49, !c49.get());
        sim.set(a23, !c23.get());
        sim.set(a48, !c48.get());
        co_await sim.delay(1);
        sim.set(a22, !c22.get());
        co_await sim.delay(1);
        sim.set(a22, !c22.get());
        sim.set(a30, !c30.get());
        co_await sim.delay(1);
        sim.set(a9, !c9.get());
        sim.set(a40, !c40.get());
        co_await sim.delay(1);
        sim.set(a52, !c52.get());
        sim.set(a40, !c40.get());
        sim.set(a48, !c48.get());
        co_await sim.delay(1);
        sim.set(a44, !c44.get());
        sim.set(a63, !c63.get());
        sim.set(a63, !c63.get());
        sim.set(a29, !c29.get());
        sim.set(a42, !c42.get());
        sim.set(a42, !c42.get());
        sim.set(a47, !c47.get());
        sim.set(a62, !c62.get());
        co_await sim.delay(1);
        sim.set(a16, !c16.get());
        sim.set(a59, !c59.get());
        co_await sim.delay(1);
        sim.set(a29, !c29.get());
        sim.set(a40, !c40.get());
        sim.set(a28, !c28.get());
        sim.set(a7, !c7.get());
        sim.set(a30, !c30.get());
        sim.set(a19, !c19.get());
        co_await sim.delay(1);
        sim.set(a48, !c48.get());
        sim.set(a34, !c34.get());
        sim.set(a23, !c23.get());
        sim.set(a10, !c10.get());
        sim.set(a36, !c36.get());
        sim.set(a13, !c13.get());
        sim.set(a24, !c24.get());
        sim.set(a7, !c7.get());
        sim.set(a8, !c8.get());
        sim.set(a7, !c7.get());
        sim.set(a9, !c9.get());
        sim.set(a28, !c28.get());
        sim.set(a3, !c3.get());
        sim.set(a49, !c49.get());
        sim.set(a29, !c29.get());
        sim.set(a18, !c18.get());
        sim.set(a6, !c6.get());
        sim.set(a36, !c36.get());
        co_await sim.delay(1);
        sim.set(a41, !c41.get());
        sim.set(a61, !c61.get());
        sim.set(a47, !c47.get());
        sim.set(a57, !c57.get());
        co_await sim.delay(1);
        sim.set(a37, !c37.get());
        sim.set(a5, !c5.get());
        sim.set(a43, !c43.get());
        sim.set(a45, !c45.get());
        sim.set(a12, !c12.get());
        sim.set(a23, !c23.get());
        sim.set(a30, !c30.get());
        sim.set(a13, !c13.get());
        sim.set(a51, !c51.get());
        sim.set(a50, !c50.get());
        co_await sim.delay(1);
        sim.set(a1, !c1.get());
        sim.set(a4, !c4.get());
        sim.set(a44, !c44.get());
        sim.set(a21, !c21.get());
        sim.set(a54, !c54.get());
        sim.set(a56, !c56.get());
        sim.set(a35, !c35.get());
        sim.set(a25, !c25.get());
        sim.set(a35, !c35.get());
        sim.set(a37, !c37.get());
        co_await sim.delay(1);
        sim.set(a55, !c55.get());
        sim.set(a30, !c30.get());
        sim.set(a27, !c27.get());
        sim.set(a6, !c6.get());
        sim.set(a37, !c37.get());
        co_await sim.delay(1);
        sim.set(a30, !c30.get());
        sim.set(a19, !c19.get());
        sim.set(a21, !c21.get());
        sim.set(a35, !c35.get());
        sim.set(a0, !c0.get());
        sim.set(a38, !c38.get());
        sim.set(a10, !c10.get());
        co_await sim.delay(1);
        sim.set(a4, !c4.get());
        co_await sim.delay(1);
        sim.set(a15, !c15.get());
        sim.set(a55, !c55.get());
        sim.set(a33, !c33.get());
        sim.set(a39, !c39.get());
        sim.set(a49, !c49.get());
        sim.set(a35, !c35.get());
        co_await sim.delay(1);
        sim.set(a24, !c24.get());
        sim.set(a9, !c9.get());
        sim.set(a23, !c23.get());
        sim.set(a40, !c40.get());
        sim.set(a3, !c3.get());
        sim.set(a57, !c57.get());
        sim.set(a55, !c55.get());
        sim.set(a2, !c2.get());
        sim.set(a40, !c40.get());
        sim.set(a56, !c56.get());
        sim.set(a4, !c4.get());
        sim.set(a48, !c48.get());
        sim.set(a41, !c41.get());
        sim.set(a21, !c21.get());
        co_await sim.delay(1);
        sim.set(a50, !c50.get());
        sim.set(a52, !c52.get());
        sim.set(a9, !c9.get());
        sim.set(a25, !c25.get());
        sim.set(a32, !c32.get());
        sim.set(a29, !c29.get());
        co_await sim.delay(1);
        sim.set(a18, !c18.get());
        co_await sim.delay(1);
        sim.set(a9, !c9.get());
        sim.set(a11, !c11.get());
        sim.set(a10, !c10.get());
        co_await sim.delay(1);
        sim.set(a59, !c59.get());
        sim.set(a52, !c52.get());
        sim.set(a29, !c29.get());
        sim.set(a28, !c28.get());
        sim.set(a13, !c13.get());
        sim.set(a39, !c39.get());
        co_await sim.delay(1);
        sim.set(a21, !c21.get());
        co_await sim.delay(1);
        sim.set(a33, !c33.get());
        sim.set(a50, !c50.get());
        sim.set(a4, !c4.get());
        sim.set(a1, !c1.get());
        sim.set(a27, !c27.get());
        sim.set(a3, !c3.get());
        sim.set(a2, !c2.get());
        sim.set(a6, !c6.get());
        sim.set(a30, !c30.get());
        sim.set(a0, !c0.get());
        sim.set(a39, !c39.get());
        sim.set(a32, !c32.get());
        sim.set(a20, !c20.get());
        sim.set(a54, !c54.get());
        sim.set(a43, !c43.get());
        sim.set(a63, !c63.get());
        sim.set(a30, !c30.get());
        sim.set(a2, !c2.get());
        co_await sim.delay(1);
        sim.set(a63, !c63.get());
        sim.set(a1, !c1.get());
        sim.set(a16, !c16.get());
        co_await sim.delay(1);
        sim.set(a39, !c39.get());
        sim.set(a1, !c1.get());
        co_await sim.delay(1);
        sim.set(a19, !c19.get());
        sim.set(a61, !c61.get());
        sim.set(a47, !c47.get());
        sim.set(a30, !c30.get());
        sim.set(a21, !c21.get());
        sim.set(a43, !c43.get());
        sim.set(a13, !c13.get());
        co_await sim.delay(1);
        sim.set(a24, !c24.get());
        sim.set(a61, !c61.get());
        co_await sim.delay(1);
        sim.set(a60, !c60.get());
        sim.set(a16, !c16.get());
        co_await sim.delay(1);
        sim.set(a20, !c20.get());
        sim.set(a57, !c57.get());
        sim.set(a17, !c17.get());
        sim.set(a24, !c24.get());
        sim.set(a61, !c61.get());
        sim.set(a3, !c3.get());
        sim.set(a63, !c63.get());
        sim.set(a6, !c6.get());
        sim.set(a20, !c20.get());
        co_await sim.delay(1);
        sim.set(a19, !c19.get());
        co_await sim.delay(1);
        sim.set(a17, !c17.get());
        sim.set(a14, !c14.get());
        sim.set(a48, !c48.get());
        sim.set(a34, !c34.get());
        sim.set(a35, !c35.get());
        sim.set(a37, !c37.get());
        sim.set(a45, !c45.get());
        sim.set(a30, !c30.get());
        sim.set(a25, !c25.get());
        co_await sim.delay(1);
        sim.set(a44, !c44.get());
        sim.set(a50, !c50.get());
        co_await sim.delay(1);
        sim.set(a20, !c20.get());
        co_await sim.delay(1);
        sim.set(a35, !c35.get());
        sim.set(a19, !c19.get());
        sim.set(a51, !c51.get());
        sim.set(a19, !c19.get());
        co_await sim.delay(1);
        sim.set(a43, !c43.get());
        sim.set(a33, !c33.get());
        sim.set(a51, !c51.get());
        sim.set(a58, !c58.get());
        co_await sim.delay(1);
        sim.set(a4, !c4.get());
        co_await sim.delay(1);
        sim.set(a23, !c23.get());
        sim.set(a35, !c35.get());
        co_await sim.delay(1);
        sim.set(a40, !c40.get());
        sim.set(a47, !c47.get());
        sim.set(a3, !c3.get());
        sim.set(a21, !c21.get());
        sim.set(a22, !c22.get());
        sim.set(a30, !c30.get());
        sim.set(a44, !c44.get());
        sim.set(a3, !c3.get());
        co_await sim.delay(1);
        sim.set(a45, !c45.get());
        sim.set(a25, !c25.get());
        sim.set(a35, !c35.get());
        sim.set(a43, !c43.get());
        co_await sim.delay(1);
        sim.set(a49, !c49.get());
        sim.set(a12, !c12.get());
        co_await sim.delay(1);
        sim.set(a28, !c28.get());
        sim.set(a63, !c63.get());
        sim.set(a41, !c41.get());
        sim.set(a35, !c35.get());
        sim.set(a16, !c16.get());
        co_await sim.delay(1);
        sim.set(a12, !c12.get());
        sim.set(a20, !c20.get());
        sim.set(a4, !c4.get());
        sim.set(a35, !c35.get());
        sim.set(a5, !c5.get());
        sim.set(a24, !c24.get());
        sim.set(a49, !c49.get());
        sim.set(a62, !c62.get());
        sim.set(a10, !c10.get());
        sim.set(a62, !c62.get());
        sim.set(a3, !c3.get());
        sim.set(a46, !c46.get());
        sim.set(a14, !c14.get());
        sim.set(a6, !c6.get());
        co_await sim.delay(1);
        sim.set(a3, !c3.get());
        sim.set(a6, !c6.get());
        sim.set(a53, !c53.get());
        co_await sim.delay(1);
        sim.set(a26, !c26.get());
        sim.set(a37, !c37.get());
        sim.set(a36, !c36.get());
        sim.set(a62, !c62.get());
        co_await sim.delay(1);
        sim.set(a26, !c26.get());
        sim.set(a47, !c47.get());
        sim.set(a38, !c38.get());
        sim.set(a39, !c39.get());
        co_await sim.delay(1);
        sim.set(a14, !c14.get());
        sim.set(a56, !c56.get());
        sim.set(a37, !c37.get());
        sim.set(a27, !c27.get());
        sim.set(a30, !c30.get());
        sim.set(a24, !c24.get());
        sim.set(a54, !c54.get());
        sim.set(a32, !c32.get());
        sim.set(a60, !c60.get());
        sim.set(a10, !c10.get());
        sim.set(a17, !c17.get());
        sim.set(a49, !c49.get());
        sim.set(a59, !c59.get());
        sim.set(a12, !c12.get());
        sim.set(a45, !c45.get());
        sim.set(a3, !c3.get());
        sim.set(a49, !c49.get());
        sim.set(a21, !c21.get());
        sim.set(a34, !c34.get());
        sim.set(a58, !c58.get());
        sim.set(a20, !c20.get());
        sim.set(a26, !c26.get());
        sim.set(a16, !c16.get());
        sim.set(a41, !c41.get());
        co_await sim.delay(1);
        sim.set(a61, !c61.get());
        sim.set(a45, !c45.get());
        sim.set(a8, !c8.get());
        sim.set(a2, !c2.get());
        sim.set(a33, !c33.get());
        sim.set(a27, !c27.get());
        co_await sim.delay(1);
        sim.set(a53, !c53.get());
        sim.set(a54, !c54.get());
        sim.set(a5, !c5.get());
        sim.set(a61, !c61.get());
        sim.set(a55, !c55.get());
        co_await sim.delay(1);
        sim.set(a6, !c6.get());
        sim.set(a7, !c7.get());
        sim.set(a57, !c57.get());
        sim.set(a32, !c32.get());
        sim.set(a1, !c1.get());
        co_await sim.delay(1);
        sim.set(a58, !c58.get());
        sim.set(a6, !c6.get());
        co_await sim.delay(1);
        sim.set(a46, !c46.get());
        sim.set(a22, !c22.get());
        sim.set(a53, !c53.get());
        sim.set(a62, !c62.get());
        sim.set(a62, !c62.get());
        sim.set(a33, !c33.get());
        sim.set(a33, !c33.get());
        sim.set(a23, !c23.get());
        sim.set(a22, !c22.get());
        sim.set(a40, !c40.get());
        sim.set(a41, !c41.get());
        sim.set(a20, !c20.get());
        co_await sim.delay(1);
        sim.set(a40, !c40.get());
        sim.set(a14, !c14.get());
        sim.set(a45, !c45.get());
        sim.set(a21, !c21.get());
        sim.set(a19, !c19.get());
        sim.set(a5, !c5.get());
        co_await sim.delay(1);
        sim.set(a51, !c51.get());
        sim.set(a42, !c42.get());
        sim.set(a19, !c19.get());
        sim.set(a6, !c6.get());
        sim.set(a0, !c0.get());
        sim.set(a31, !c31.get());
        sim.set(a1, !c1.get());
        co_await sim.delay(1);
        sim.set(a12, !c12.get());
        sim.set(a13, !c13.get());
        sim.set(a3, !c3.get());
        sim.set(a48, !c48.get());
        sim.set(a4, !c4.get());
        sim.set(a57, !c57.get());
        sim.set(a9, !c9.get());
        co_await sim.delay(1);
        sim.set(a43, !c43.get());
        sim.set(a33, !c33.get());
        sim.set(a57, !c57.get());
        sim.set(a3, !c3.get());
        co_await sim.delay(1);
        sim.set(a9, !c9.get());
        co_await sim.delay(1);
        sim.set(a36, !c36.get());
        co_await sim.delay(1);
        sim.set(a52, !c52.get());
        sim.set(a35, !c35.get());
        co_await sim.delay(1);
        sim.set(a6, !c6.get());
        sim.set(a41, !c41.get());
        sim.set(a11, !c11.get());
        sim.set(a24, !c24.get());
        sim.set(a58, !c58.get());
        sim.set(a17, !c17.get());
        sim.set(a18, !c18.get());
        sim.set(a27, !c27.get());
        sim.set(a32, !c32.get());
        sim.set(a2, !c2.get());
        sim.set(a10, !c10.get());
        sim.set(a1, !c1.get());
        sim.set(a46, !c46.get());
        co_await sim.delay(1);
        sim.set(a0, !c0.get());
        sim.set(a9, !c9.get());
        sim.set(a15, !c15.get());
        sim.set(a51, !c51.get());
        co_await sim.delay(1);
        sim.set(a50, !c50.get());
        sim.set(a31, !c31.get());
        sim.set(a41, !c41.get());
        sim.set(a46, !c46.get());
        sim.set(a1, !c1.get());
        co_await sim.delay(1);
        sim.set(a38, !c38.get());
        sim.set(a11, !c11.get());
        sim.set(a41, !c41.get());
        sim.set(a37, !c37.get());
        sim.set(a21, !c21.get());
        sim.set(a49, !c49.get());
        sim.set(a60, !c60.get());
        co_await sim.delay(1);
        sim.set(a46, !c46.get());
        sim.set(a58, !c58.get());
        sim.set(a27, !c27.get());
        sim.set(a29, !c29.get());
        co_await sim.delay(1);
        sim.set(a24, !c24.get());
        sim.set(a29, !c29.get());
        co_await sim.delay(1);
        sim.set(a19, !c19.get());
        sim.set(a37, !c37.get());
        sim.set(a58, !c58.get());
        sim.set(a35, !c35.get());
        sim.set(a16, !c16.get());
        sim.set(a10, !c10.get());
        sim.set(a28, !c28.get());
        co_await sim.delay(1);
        sim.set(a28, !c28.get());
        sim.set(a0, !c0.get());
        sim.set(a60, !c60.get());
        co_await sim.delay(1);
        sim.set(a0, !c0.get());
        sim.set(a24, !c24.get());
        sim.set(a6, !c6.get());
        sim.set(a25, !c25.get());
        sim.set(a58, !c58.get());
        sim.set(a34, !c34.get());
        sim.set(a19, !c19.get());
        sim.set(a43, !c43.get());
        co_await sim.delay(1);
        sim.set(a43, !c43.get());
        co_await sim.delay(1);
        sim.set(a6, !c6.get());
        co_await sim.delay(1);
        sim.set(a37, !c37.get());
        sim.set(a20, !c20.get());
        sim.set(a2, !c2.get());
        co_await sim.delay(1);
        sim.set(a50, !c50.get());
        sim.set(a31, !c31.get());
        sim.set(a59, !c59.get());
        sim.set(a2, !c2.get());
        sim.set(a63, !c63.get());
        sim.set(a4, !c4.get());
        sim.set(a18, !c18.get());
        sim.set(a37, !c37.get());
        sim.set(a24, !c24.get());
        co_await sim.delay(1);
        sim.set(a3, !c3.get());
        sim.set(a36, !c36.get());
        sim.set(a17, !c17.get());
        sim.set(a61, !c61.get());
        sim.set(a21, !c21.get());
        sim.set(a12, !c12.get());
        sim.set(a15, !c15.get());
        sim.set(a21, !c21.get());
        co_await sim.delay(1);
        sim.set(a50, !c50.get());
        co_await sim.delay(1);
        sim.set(a31, !c31.get());
        sim.set(a20, !c20.get());
        sim.set(a58, !c58.get());
        sim.set(a36, !c36.get());
        sim.set(a5, !c5.get());
        sim.set(a61, !c61.get());
        sim.set(a56, !c56.get());
        sim.set(a58, !c58.get());
        co_await sim.delay(1);
        sim.set(a41, !c41.get());
        sim.set(a56, !c56.get());
        sim.set(a25, !c25.get());
        co_await sim.delay(1);
        sim.set(a24, !c24.get());
        sim.set(a19, !c19.get());
        sim.set(a34, !c34.get());
        co_await sim.delay(1);
        sim.set(a23, !c23.get());
        sim.set(a28, !c28.get());
        sim.set(a21, !c21.get());
        sim.set(a14, !c14.get());
        sim.set(a58, !c58.get());
        sim.set(a53, !c53.get());
        sim.set(a31, !c31.get());
        sim.set(a57, !c57.get());
        sim.set(a27, !c27.get());
        co_await sim.delay(1);
        sim.set(a21, !c21.get());
        sim.set(a1, !c1.get());
        sim.set(a9, !c9.get());
        sim.set(a18, !c18.get());
        sim.set(a48, !c48.get());
        sim.set(a57, !c57.get());
        sim.set(a51, !c51.get());
        sim.set(a44, !c44.get());
        sim.set(a16, !c16.get());
        sim.set(a32, !c32.get());
        sim.set(a15, !c15.get());
        sim.set(a62, !c62.get());
        sim.set(a36, !c36.get());
        sim.set(a8, !c8.get());
        sim.set(a11, !c11.get());
        sim.set(a17, !c17.get());
        sim.set(a14, !c14.get());
        sim.set(a25, !c25.get());
        sim.set(a25, !c25.get());
        sim.set(a19, !c19.get());
        sim.set(a36, !c36.get());
        sim.set(a9, !c9.get());
        sim.set(a62, !c62.get());
        sim.set(a1, !c1.get());
        sim.set(a0, !c0.get());
        sim.set(a0, !c0.get());
        sim.set(a6, !c6.get());
        sim.set(a4, !c4.get());
        sim.set(a17, !c17.get());
        sim.set(a2, !c2.get());
        sim.set(a26, !c26.get());
        co_await sim.delay(1);
        sim.set(a2, !c2.get());
        sim.set(a20, !c20.get());
        sim.set(a24, !c24.get());
        sim.set(a2, !c2.get());
        sim.set(a39, !c39.get());
        sim.set(a40, !c40.get());
        sim.set(a5, !c5.get());
        sim.set(a10, !c10.get());
        co_await sim.delay(1);
        sim.set(a61, !c61.get());
        sim.set(a21, !c21.get());
        sim.set(a57, !c57.get());
        co_await sim.delay(1);
        sim.set(a48, !c48.get());
        sim.set(a55, !c55.get());
        sim.set(a37, !c37.get());
        sim.set(a1, !c1.get());
        sim.set(a35, !c35.get());
        sim.set(a16, !c16.get());
        sim.set(a39, !c39.get());
        sim.set(a41, !c41.get());
        sim.set(a62, !c62.get());
        sim.set(a33, !c33.get());
        co_await sim.delay(1);
        sim.set(a49, !c49.get());
        co_await sim.delay(1);
        sim.set(a32, !c32.get());
        sim.set(a56, !c56.get());
        sim.set(a10, !c10.get());
        sim.set(a0, !c0.get());
        sim.set(a46, !c46.get());
        sim.set(a16, !c16.get());
        sim.set(a33, !c33.get());
        sim.set(a21, !c21.get());
        sim.set(a16, !c16.get());
        sim.set(a47, !c47.get());
        sim.set(a18, !c18.get());
        sim.set(a43, !c43.get());
        sim.set(a46, !c46.get());
        co_await sim.delay(1);
        sim.set(a19, !c19.get());
        sim.set(a38, !c38.get());
        sim.set(a52, !c52.get());
        sim.set(a26, !c26.get());
        co_await sim.delay(1);
        sim.set(a35, !c35.get());
        co_await sim.delay(1);
        sim.set(a0, !c0.get());
        sim.set(a27, !c27.get());
        sim.set(a40, !c40.get());
        sim.set(a19, !c19.get());
        sim.set(a18, !c18.get());
        sim.set(a55, !c55.get());
        co_await sim.delay(1);
        sim.set(a51, !c51.get());
        sim.set(a54, !c54.get());
        sim.set(a63, !c63.get());
        sim.set(a16, !c16.get());
        sim.set(a31, !c31.get());
        co_await sim.delay(1);
        sim.set(a49, !c49.get());
        co_await sim.delay(1);
        sim.set(a59, !c59.get());
        co_await sim.delay(1);
        sim.set(a8, !c8.get());
        sim.set(a40, !c40.get());
        sim.set(a9, !c9.get());
        sim.set(a35, !c35.get());
        sim.set(a27, !c27.get());
        sim.set(a39, !c39.get());
        sim.set(a60, !c60.get());
        sim.set(a27, !c27.get());
        co_await sim.delay(1);
        sim.set(a49, !c49.get());
        co_await sim.delay(1);
        sim.set(a22, !c22.get());
        sim.set(a11, !c11.get());
        sim.set(a57, !c57.get());
        sim.set(a42, !c42.get());
        sim.set(a21, !c21.get());
        sim.set(a47, !c47.get());
        sim.set(a49, !c49.get());
        sim.set(a0, !c0.get());
        sim.set(a58, !c58.get());
        sim.set(a10, !c10.get());
        sim.set(a1, !c1.get());
        sim.set(a19, !c19.get());
        sim.set(a30, !c30.get());
        co_await sim.delay(1);
        sim.set(a50, !c50.get());
        sim.set(a49, !c49.get());
        sim.set(a4, !c4.get());
        co_await sim.delay(1);
        sim.set(a51, !c51.get());
        sim.set(a63, !c63.get());
        sim.set(a14, !c14.get());
        sim.set(a27, !c27.get());
        co_await sim.delay(1);
        sim.set(a6, !c6.get());
        sim.set(a57, !c57.get());
        sim.set(a15, !c15.get());
        sim.set(a27, !c27.get());
        sim.set(a8, !c8.get());
        co_await sim.delay(1);
        sim.set(a48, !c48.get());
        sim.set(a26, !c26.get());
        sim.set(a18, !c18.get());
        co_await sim.delay(1);
        sim.set(a1, !c1.get());
        sim.set(a20, !c20.get());
        sim.set(a43, !c43.get());
        co_await sim.delay(1);
        sim.set(a53, !c53.get());
        sim.set(a14, !c14.get());
        sim.set(a9, !c9.get());
        co_await sim.delay(1);
        sim.set(a19, !c19.get());
        sim.set(a45, !c45.get());
        sim.set(a32, !c32.get());
        sim.set(a18, !c18.get());
        sim.set(a28, !c28.get());
        sim.set(a56, !c56.get());
        co_await sim.delay(1);
        sim.set(a0, !c0.get());
        sim.set(a10, !c10.get());
        sim.set(a51, !c51.get());
        sim.set(a4, !c4.get());
        co_await sim.delay(1);
        sim.set(a53, !c53.get());
        sim.set(a57, !c57.get());
        co_await sim.delay(1);
        sim.set(a35, !c35.get());
        sim.set(a4, !c4.get());
        sim.set(a32, !c32.get());
        sim.set(a37, !c37.get());
        sim.set(a48, !c48.get());
        sim.set(a6, !c6.get());
        sim.set(a40, !c40.get());
        sim.set(a20, !c20.get());
        sim.set(a49, !c49.get());
        sim.set(a26, !c26.get());
        sim.set(a61, !c61.get());
        sim.set(a8, !c8.get());
        sim.set(a48, !c48.get());
        sim.set(a54, !c54.get());
        sim.set(a27, !c27.get());
        sim.set(a50, !c50.get());
        sim.set(a52, !c52.get());
        sim.set(a16, !c16.get());
        co_await sim.delay(1);
        sim.set(a30, !c30.get());
        co_await sim.delay(1);
        sim.set(a57, !c57.get());
        sim.set(a12, !c12.get());
        sim.set(a5, !c5.get());
        sim.set(a40, !c40.get());
        co_await sim.delay(1);
        sim.set(a62, !c62.get());
        co_await sim.delay(1);
        sim.set(a33, !c33.get());
        sim.set(a45, !c45.get());
        sim.set(a29, !c29.get());
        sim.set(a60, !c60.get());
        sim.set(a18, !c18.get());
        sim.set(a28, !c28.get());
        sim.set(a55, !c55.get());
        sim.set(a46, !c46.get());
        sim.set(a32, !c32.get());
        sim.set(a63, !c63.get());
        sim.set(a46, !c46.get());
        sim.set(a49, !c49.get());
        sim.set(a51, !c51.get());
        sim.set(a54, !c54.get());
        co_await sim.delay(1);
        sim.set(a33, !c33.get());
        sim.set(a62, !c62.get());
        sim.set(a39, !c39.get());
        sim.set(a32, !c32.get());
        sim.set(a34, !c34.get());
        sim.set(a19, !c19.get());
        sim.set(a4, !c4.get());
        sim.set(a60, !c60.get());
        sim.set(a49, !c49.get());
        sim.set(a46, !c46.get());
        co_await sim.delay(1);
        sim.set(a9, !c9.get());
        co_await sim.delay(1);
        sim.set(a24, !c24.get());
        sim.set(a48, !c48.get());
        sim.set(a32, !c32.get());
        sim.set(a7, !c7.get());
        co_await sim.delay(1);
        sim.set(a56, !c56.get());
        sim.set(a30, !c30.get());
        sim.set(a13, !c13.get());
        sim.set(a50, !c50.get());
        sim.set(a0, !c0.get());
        sim.set(a49, !c49.get());
        sim.set(a44, !c44.get());
        sim.set(a12, !c12.get());
        sim.set(a22, !c22.get());
        sim.set(a56, !c56.get());
        co_await sim.delay(1);
        sim.set(a26, !c26.get());
        sim.set(a29, !c29.get());
        sim.set(a33, !c33.get());
        sim.set(a2, !c2.get());
        sim.set(a22, !c22.get());
        sim.set(a61, !c61.get());
        sim.set(a54, !c54.get());
        sim.set(a54, !c54.get());
        sim.set(a5, !c5.get());
        sim.set(a54, !c54.get());
        sim.set(a38, !c38.get());
        sim.set(a23, !c23.get());
        sim.set(a48, !c48.get());
        co_await sim.delay(1);
        sim.set(a7, !c7.get());
        sim.set(a47, !c47.get());
        sim.set(a59, !c59.get());
        co_await sim.delay(1);
        sim.set(a26, !c26.get());
        sim.set(a11, !c11.get());
        co_await sim.delay(1);
        sim.set(a42, !c42.get());
        sim.set(a16, !c16.get());
        sim.set(a1, !c1.get());

        co_await sim.delay(1);
        // print_a_b_c();
    }
    print_a_b_c();
    sim.finish();
}

int main()
{
    simulator_t sim;
    sim.make_process("b0", do_b0);
    sim.make_process("c0", do_c0);
    sim.make_process("b1", do_b1);
    sim.make_process("c1", do_c1);
    sim.make_process("b2", do_b2);
    sim.make_process("c2", do_c2);
    sim.make_process("b3", do_b3);
    sim.make_process("c3", do_c3);
    sim.make_process("b4", do_b4);
    sim.make_process("c4", do_c4);
    sim.make_process("b5", do_b5);
    sim.make_process("c5", do_c5);
    sim.make_process("b6", do_b6);
    sim.make_process("c6", do_c6);
    sim.make_process("b7", do_b7);
    sim.make_process("c7", do_c7);
    sim.make_process("b8", do_b8);
    sim.make_process("c8", do_c8);
    sim.make_process("b9", do_b9);
    sim.make_process("c9", do_c9);
    sim.make_process("b10", do_b10);
    sim.make_process("c10", do_c10);
    sim.make_process("b11", do_b11);
    sim.make_process("c11", do_c11);
    sim.make_process("b12", do_b12);
    sim.make_process("c12", do_c12);
    sim.make_process("b13", do_b13);
    sim.make_process("c13", do_c13);
    sim.make_process("b14", do_b14);
    sim.make_process("c14", do_c14);
    sim.make_process("b15", do_b15);
    sim.make_process("c15", do_c15);
    sim.make_process("b16", do_b16);
    sim.make_process("c16", do_c16);
    sim.make_process("b17", do_b17);
    sim.make_process("c17", do_c17);
    sim.make_process("b18", do_b18);
    sim.make_process("c18", do_c18);
    sim.make_process("b19", do_b19);
    sim.make_process("c19", do_c19);
    sim.make_process("b20", do_b20);
    sim.make_process("c20", do_c20);
    sim.make_process("b21", do_b21);
    sim.make_process("c21", do_c21);
    sim.make_process("b22", do_b22);
    sim.make_process("c22", do_c22);
    sim.make_process("b23", do_b23);
    sim.make_process("c23", do_c23);
    sim.make_process("b24", do_b24);
    sim.make_process("c24", do_c24);
    sim.make_process("b25", do_b25);
    sim.make_process("c25", do_c25);
    sim.make_process("b26", do_b26);
    sim.make_process("c26", do_c26);
    sim.make_process("b27", do_b27);
    sim.make_process("c27", do_c27);
    sim.make_process("b28", do_b28);
    sim.make_process("c28", do_c28);
    sim.make_process("b29", do_b29);
    sim.make_process("c29", do_c29);
    sim.make_process("b30", do_b30);
    sim.make_process("c30", do_c30);
    sim.make_process("b31", do_b31);
    sim.make_process("c31", do_c31);
    sim.make_process("b32", do_b32);
    sim.make_process("c32", do_c32);
    sim.make_process("b33", do_b33);
    sim.make_process("c33", do_c33);
    sim.make_process("b34", do_b34);
    sim.make_process("c34", do_c34);
    sim.make_process("b35", do_b35);
    sim.make_process("c35", do_c35);
    sim.make_process("b36", do_b36);
    sim.make_process("c36", do_c36);
    sim.make_process("b37", do_b37);
    sim.make_process("c37", do_c37);
    sim.make_process("b38", do_b38);
    sim.make_process("c38", do_c38);
    sim.make_process("b39", do_b39);
    sim.make_process("c39", do_c39);
    sim.make_process("b40", do_b40);
    sim.make_process("c40", do_c40);
    sim.make_process("b41", do_b41);
    sim.make_process("c41", do_c41);
    sim.make_process("b42", do_b42);
    sim.make_process("c42", do_c42);
    sim.make_process("b43", do_b43);
    sim.make_process("c43", do_c43);
    sim.make_process("b44", do_b44);
    sim.make_process("c44", do_c44);
    sim.make_process("b45", do_b45);
    sim.make_process("c45", do_c45);
    sim.make_process("b46", do_b46);
    sim.make_process("c46", do_c46);
    sim.make_process("b47", do_b47);
    sim.make_process("c47", do_c47);
    sim.make_process("b48", do_b48);
    sim.make_process("c48", do_c48);
    sim.make_process("b49", do_b49);
    sim.make_process("c49", do_c49);
    sim.make_process("b50", do_b50);
    sim.make_process("c50", do_c50);
    sim.make_process("b51", do_b51);
    sim.make_process("c51", do_c51);
    sim.make_process("b52", do_b52);
    sim.make_process("c52", do_c52);
    sim.make_process("b53", do_b53);
    sim.make_process("c53", do_c53);
    sim.make_process("b54", do_b54);
    sim.make_process("c54", do_c54);
    sim.make_process("b55", do_b55);
    sim.make_process("c55", do_c55);
    sim.make_process("b56", do_b56);
    sim.make_process("c56", do_c56);
    sim.make_process("b57", do_b57);
    sim.make_process("c57", do_c57);
    sim.make_process("b58", do_b58);
    sim.make_process("c58", do_c58);
    sim.make_process("b59", do_b59);
    sim.make_process("c59", do_c59);
    sim.make_process("b60", do_b60);
    sim.make_process("c60", do_c60);
    sim.make_process("b61", do_b61);
    sim.make_process("c61", do_c61);
    sim.make_process("b62", do_b62);
    sim.make_process("c62", do_c62);
    sim.make_process("b63", do_b63);
    sim.make_process("c63", do_c63);
    sim.make_process("master", master);
    sim.run();
}
