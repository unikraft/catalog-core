ROOTFS_DIR := ./extracted_rootfs
DOCKER_IMAGE := httpserver-rust1.75-catalog-core-rootfs

.PHONY: all clean

all:
	docker build -t $(DOCKER_IMAGE) .
	docker create --name temp-container $(DOCKER_IMAGE) /server
	mkdir -p $(ROOTFS_DIR)
	docker export temp-container | tar -x -C $(ROOTFS_DIR)
	docker rm temp-container

clean:
	rm -rf $(ROOTFS_DIR)
