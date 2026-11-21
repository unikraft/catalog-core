IMAGE = haproxy-rootfs
CONTAINER = haproxy-rootfs-ct

.PHONY: all clean

all:
	docker build -t $(IMAGE) .
	-docker rm -f $(CONTAINER)
	docker create --name $(CONTAINER) $(IMAGE) /usr/bin/haproxy
	docker export $(CONTAINER) | tar -x -C .
	docker rm $(CONTAINER)
	rm -f .dockerenv etc/hostname etc/hosts etc/mtab etc/resolv.conf

clean:
	rm -rf usr lib lib64
	-docker rm -f $(CONTAINER)
