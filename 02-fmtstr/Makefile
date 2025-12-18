FLAGS=-Wall -ansi -Wno-stringop-overflow -fno-stack-protector \
	-Wno-deprecated-declarations -Wno-format-security

.PHONY: clean test
build/a.out: src/main.c
	mkdir -vp ./build
	gcc -o $@ $^ $(FLAGS)
test: build/a.out
	python3 ./test/test_exploit.py
clean: 
	rm -rf ./build
