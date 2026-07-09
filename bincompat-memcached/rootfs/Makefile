ROOTFS_DIR := ./extracted_rootfs
DOCKER_IMAGE := memcached-catalog-core-rootfs

.PHONY: all clean

all:
	docker build -t $(DOCKER_IMAGE) .
	docker create --name temp-container $(DOCKER_IMAGE) /usr/bin/memcached
	mkdir -p $(ROOTFS_DIR)
	docker export temp-container | tar -x -C $(ROOTFS_DIR)
	docker rm temp-container

clean:
	rm -rf $(ROOTFS_DIR)
