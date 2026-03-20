#!/bin/bash

function compile_headers_sources() {
	gcc -o ./bin/test -I./inc src/*.c -Wall;
	./bin/test;
}

compile_headers_sources