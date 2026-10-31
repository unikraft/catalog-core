CFLAGS = -fPIC -Wall
LDFLAGS = -static-pie

.PHONY: all clean

all: http_server

http_server: http_server.c
	$(CC) $(LDFLAGS) $(CFLAGS) -o $@ $^

clean:
	-rm -f http_server
