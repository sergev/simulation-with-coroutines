Let's compare the speed of random logic simulation.

Icarus Verilog:

    time ./random
    aa94b18fe01dc1f8 312f8177e1554de4 51fb4c711ff4f827

    real    3m23.447s
    user    3m23.377s
    sys 0m0.042s

C++:

    $ time ../demo3
    aa94b18fe01dc1f8 312f8177e1554de4 51fb4c711ff4f827

    real    0m1.865s
    user    0m1.860s
    sys 0m0.003s
