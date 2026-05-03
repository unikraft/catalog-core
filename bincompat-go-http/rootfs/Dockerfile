FROM golang:1.26 AS build

WORKDIR /src

RUN apt-get update && apt-get install -y --no-install-recommends musl-tools && \
    rm -rf /var/lib/apt/lists/*

RUN git clone --depth 1 --branch main \
    https://github.com/mccutchen/go-httpbin.git .

RUN --mount=type=cache,target=/root/.cache/go-build \
    make build && \
    CGO_ENABLED=1 CC=musl-gcc go build \
      -buildmode=pie \
      -ldflags='-linkmode external -extldflags "-static-pie"' \
      -o /src/dist/go-httpbin ./cmd/go-httpbin