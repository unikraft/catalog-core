IMAGE ?= go-httpbin-catalog-core-rootfs
CONTAINER ?= go-httpbin-catalog-core-extract

.PHONY: all clean

all: go-httpbin

go-httpbin: Dockerfile
	docker rm -f $(CONTAINER) >/dev/null 2>&1 || true
	docker build -t $(IMAGE) .
	docker run --name go-httpbin-catalog-core-extract $(IMAGE)
	docker cp $(CONTAINER):/src/dist/go-httpbin ./go-httpbin
	docker rm -f $(CONTAINER)
	chmod +x go-httpbin

clean:
	-rm -f go-httpbin
