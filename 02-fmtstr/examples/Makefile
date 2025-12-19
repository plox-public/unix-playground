PROTDISABLE=-Wno-stringop-overflow -fno-stack-protector \
	-Wno-deprecated-declarations -Wno-format-security \
	-Wno-format
FLAGS=-Wall -ansi -g -O0 $(PROTDISABLE)

.PHONY: clean test

build/a.out: src/main.c
	mkdir -vp ./build
	gcc -o $@ $^ $(FLAGS)

test: build/a.out
	./build/a.out

clean: 
	rm -rf ./build
