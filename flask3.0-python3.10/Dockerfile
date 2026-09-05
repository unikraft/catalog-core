FROM python:3.10.11 AS base

COPY ./requirements.txt /tmp/requirements.txt
RUN pip install --no-cache-dir -r /tmp/requirements.txt

FROM scratch

COPY --from=base /usr/local/lib/python3.10 /usr/local/lib/python3.10
COPY ./server.py /app/server.py
