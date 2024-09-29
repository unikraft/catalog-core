CFLAGS = -fPIC -Wall
CXXFLAGS = -fPIC -Wall
LDFLAGS = -static-pie

.PHONY: all clean

all: hello-c hello-cpp

hello-c: hello.c
	$(CC) $(LDFLAGS) $(CFLAGS) -o $@ $^

hello-cpp: hello.cpp
	$(CXX) $(LDFLAGS) $(CXXFLAGS) -o $@ $^

clean:
	-rm -f *~
	-rm -f hello-c hello-cpp
