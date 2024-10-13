CFLAGS = -fPIC -Wall
LDFLAGS = -static-pie

.PHONY: all clean

all: c-server

c-server: server.c
	$(CC) $(LDFLAGS) $(CFLAGS) -o $@ $^

clean:
	-rm -f *~
	-rm -f c-server
