CXX             = g++-10 -std=c++20 -fcoroutines
CXXFLAGS        = -g -O0
PROG            = demo1 demo2
OBJ1            = demo1.o simulator.o
OBJ2            = demo2.o simulator.o

all:            $(PROG)

clean:
		rm -f *.o $(PROG)

demo1:          $(OBJ1)
		$(CXX) $(LDFLAGS) $(OBJ1) -o $@

demo2:          $(OBJ2)
		$(CXX) $(LDFLAGS) $(OBJ2) -o $@
###
demo1.o: demo1.cpp simulator.h
demo2.o: demo2.cpp simulator.h
simulator.o: simulator.cpp simulator.h
