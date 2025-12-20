PROTDISABLE=-Wno-stringop-overflow -fno-stack-protector \
	-Wno-deprecated-declarations -Wno-format-security
FLAGS=-Wall -ansi -g -O0 $(PROTDISABLE)

.PHONY: clean test
build/a.out: src/main.c
	mkdir -vp ./build
	gcc -o $@ $^ $(FLAGS)
test: build/a.out
	python3 ./test/test_exploit.py
clean: 
	rm -rf ./build
	find . -type f -name "*.gdb_history" -delete
