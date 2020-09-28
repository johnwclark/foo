FROM alpine:3.12
RUN apk update && apk add make && apk add g++

WORKDIR /opt/foo
COPY . .
RUN make

WORKDIR /opt/foo
CMD ./main
