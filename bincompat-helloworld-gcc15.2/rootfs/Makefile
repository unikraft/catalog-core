CFLAGS = -fPIC -Wall
LDFLAGS = -static-pie

.PHONY: all clean

all: helloworld-c

helloworld-c: helloworld.c
	$(CC) $(LDFLAGS) $(CFLAGS) -o $@ $^

clean:
	-rm -f helloworld-c
