#!/bin/bash

function compile_headers_sources() {
	gcc -g -o ./bin/test -I./inc src/*.c -Wall;
	./bin/test;
}

compile_headers_sources