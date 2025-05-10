FROM debian:bullseye-slim

RUN apt-get update && apt-get install -y \
    wget build-essential libssl-dev zlib1g-dev \
    libbz2-dev libreadline-dev libsqlite3-dev \
    libffi-dev libncurses5-dev libgdbm-dev liblzma-dev \
    xz-utils uuid-dev

WORKDIR /tmp

RUN wget https://www.python.org/ftp/python/3.12.2/Python-3.12.2.tgz && \
    tar -xzf Python-3.12.2.tgz && \
    cd Python-3.12.2 && \
    ./configure --prefix=/usr/local --enable-optimizations --without-ensurepip && \
    make -j$(nproc) && make install

FROM scratch

COPY --from=0 /usr/local/lib/python3.12 /usr/local/lib/python3.12
COPY ./http-server.py /app/http-server.py

CMD ["python3", "/app/http-server.py"]
