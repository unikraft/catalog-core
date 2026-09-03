FROM ruby:2.6.10 AS base

FROM scratch

COPY --from=base /usr/local/lib/ruby /usr/local/lib/ruby

COPY ./helloworld.rb /app/helloworld.rb
