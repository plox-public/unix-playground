FLAGS=-Wall -ansi -Wno-stringop-overflow -fno-stack-protector

.PHONY: clean test
build/a.out: src/main.c
	mkdir -vp ./build
	gcc -o $@ $^ $(FLAGS)
test:
	python3 ./test/test_exploit.py
clean: 
	rm -f ./build
