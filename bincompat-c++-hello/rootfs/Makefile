CXX = g++
CXXFLAGS = -std=c++17 -fPIC -Wall
LDFLAGS = -static-pie

.PHONY: all clean

all: hello-c++

hello-c++: helloworld.cpp
	$(CXX) $(LDFLAGS) $(CXXFLAGS) -o $@ $^

clean:
	-rm -f hello-c++
