CXX             = g++ -std=c++20 -fcoroutines
CXXFLAGS        = -g -O0
PROG            = demo1
OBJ             = demo1.o simulator.o

all:            $(PROG)

clean:
		rm -f *.o $(PROG)

demo1:          $(OBJ)
		$(CXX) $(LDFLAGS) $(OBJ) -o $@
