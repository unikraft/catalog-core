FROM ruby:4.0.6 AS base

# Ruby extensions are statically linked into the unikernel. Shared objects
# left in the load path would be picked up first and fail to load.
RUN find /usr/local/lib/ruby -name '*.so' -delete

FROM scratch

COPY --from=base /usr/local/lib/ruby /usr/local/lib/ruby

COPY ./helloworld.rb /app/helloworld.rb
