FROM golang:1.22-alpine AS builder

WORKDIR /traefik-src

RUN apk add --no-cache git make gcc musl-dev nodejs npm yarn ca-certificates

RUN git clone --depth 1 -b v3.0.0 https://github.com/traefik/traefik.git .

RUN cd webui && yarn config set ignore-engines true && npm install && npm run build

RUN CGO_ENABLED=0 go build -buildmode=pie -o /traefik-binary ./cmd/traefik

FROM scratch

COPY --from=builder /traefik-binary /usr/local/bin/traefik

COPY --from=builder /lib/ld-musl-x86_64.so.1 /lib/ld-musl-x86_64.so.1

COPY config.yml /etc/traefik/config.yml

COPY --from=builder /etc/ssl/certs/ca-certificates.crt /etc/ssl/certs/ca-certificates.crt

ENTRYPOINT ["/usr/local/bin/traefik"]
