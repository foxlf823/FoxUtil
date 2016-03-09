cc=g++

cflags = -O0 -g3 -w -funroll-loops  \
			

libs = /usr/lib/libwordnet.a

all: test

test: test.cpp WordNet.h
	$(cc) -o test test.cpp $(cflags) $(libs)

	




clean:
	rm -rf *.o
	rm -rf test

