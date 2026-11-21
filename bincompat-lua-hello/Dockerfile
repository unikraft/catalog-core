FROM --platform=linux/x86_64 debian:bookworm AS build

RUN set -xe; \
    apt-get -yqq update; \
    apt-get -yqq install lua5.4=5.4.4-3+deb12u1; \
    mkdir -p /target/usr/bin; \
    cp -L /usr/bin/lua5.4 /target/usr/bin/lua; \
    ldd /usr/bin/lua5.4 | grep -o '/[^ ]*' | xargs -I{} cp -L --parents {} /target/; \
    cp --parents /etc/ld.so.cache /target/

FROM scratch

COPY --from=build /target/ /
COPY ./hello.lua /src/hello.lua
