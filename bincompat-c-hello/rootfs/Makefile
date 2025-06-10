CFLAGS = -fPIC -Wall
LDFLAGS = -static-pie

.PHONY: all clean

all: hello-c

hello-c: hello.c
	$(CC) $(LDFLAGS) $(CFLAGS) -o $@ $^

clean:
	-rm -f hello-c
