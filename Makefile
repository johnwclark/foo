
CXX= g++
CXXFLAGS= -Wall
CC= g++
LDFLAGS= -Wall

TARGETS= main

all: ${TARGETS}

clean:
	rm -f *.o ${TARGETS}

main.o: main.cpp Foo.h

