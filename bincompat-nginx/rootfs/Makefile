ROOTFS_DIR := ./extracted_rootfs
DOCKER_IMAGE := nginx-catalog-core-rootfs

.PHONY: all clean

all:
	docker build -t $(DOCKER_IMAGE) .
	docker create --name temp-container $(DOCKER_IMAGE)
	docker cp temp-container:/rootfs $(ROOTFS_DIR)
	docker rm temp-container

clean:
	rm -rf $(ROOTFS_DIR)
