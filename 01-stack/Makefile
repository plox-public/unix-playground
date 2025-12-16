FLAGS=-Wall -ansi -Wno-stringop-overflow -fno-stack-protector
BUILDPATH=./build
OUT=$(BUILDPATH)/a.out

$(OUT): src/main.c
	mkdir -vp $(BUILDPATH)
	gcc -o $@ $^ $(FLAGS)

.PHONY: clean test

clean:
	rm -f $(OUT)
test:
	$(OUT)
