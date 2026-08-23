IMAGE ?= go-httpbin-catalog-core-rootfs
CONTAINER ?= go-httpbin-catalog-core-extract

.PHONY: all clean

all: go-httpbin

go-httpbin: Dockerfile
	docker rm -f $(CONTAINER) >/dev/null 2>&1 || true
	DOCKER_BUILDKIT=1 docker build -t $(IMAGE) .
	docker create --name $(CONTAINER) $(IMAGE)
	docker cp $(CONTAINER):/src/dist/go-httpbin ./go-httpbin
	docker rm -f $(CONTAINER)
	chmod +x go-httpbin

clean:
	-rm -f go-httpbin
