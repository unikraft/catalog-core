CXX = g++
CXXFLAGS = -fPIC -Wall
LDFLAGS = -static-pie

.PHONY: all clean

all: http_server

http_server: http_server.cpp
	$(CXX) $(LDFLAGS) $(CXXFLAGS) -o $@ $^

clean:
	-rm -f http_server
