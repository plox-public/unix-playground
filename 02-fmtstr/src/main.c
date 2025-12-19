#include <stdio.h>
#include <unistd.h>

void win(void){
	printf("\nCTF_FLAG{example_flag}\n");
};

void fail(void){
	printf("\nfailure...\n");
};

int vuln(void) {

    int _A = 0x41414141;
    int _B = 0x42424242;
	int changeme = 0xdeadbeef;
	char input [40] = {0};
    int _C = 0x43434343;
    int _D = 0x44444444;

    const char *msg = "02-fmtstr, this challenge is similar to the first one.\n"
        "However this one will not read in more bytes then the buffer allows.\n"
        "This requires a format string exploit to write some bytes on the stack.\n";

    puts(msg);

    printf("------STACK ADDR------\n");
    printf("address of _A: %p\n", &_A);
    printf("address of _B: %p\n", &_B);
    printf("address of changeme: %p\n", &changeme);
    printf("address of _C: %p\n", &_C);
    printf("address of _D: %p\n", &_D);
    printf("----------------------\n");

    printf("------STACK VALS------\n");
    printf("address of _A: %08x\n", _A);
    printf("address of _B: %08x\n", _B);
    printf("address of changeme: %08x\n", changeme);
    printf("address of _C: %08x\n", _C);
    printf("address of _D: %08x\n", _D);
    printf("----------------------\n");

	printf("input > ");
	gets(input);
    printf(input);

    printf("------STACK ADDR------\n");
    printf("address of _A: %p\n", &_A);
    printf("address of _B: %p\n", &_B);
    printf("address of changeme: %p\n", &changeme);
    printf("address of _C: %p\n", &_C);
    printf("address of _D: %p\n", &_D);
    printf("----------------------\n");

    printf("------STACK VALS------\n");
    printf("address of _A: %08x\n", _A);
    printf("address of _B: %08x\n", _B);
    printf("address of changeme: %08x\n", changeme);
    printf("address of _C: %08x\n", _C);
    printf("address of _D: %08x\n", _D);
    printf("----------------------\n");

	if (changeme != 0xdeadbeef) {
		win();
	} else {
		fail();
	}

	return 0;
}

int main(void){
    vuln();
    return 0;
}


