#include <stdio.h>
#include <unistd.h>

void win(void){
	printf("\nCTF_FLAG{example_flag}\n");
};

void fail(void){
	printf("\nfailure...\n");
};

int main(void) {

	int changeme = 0;
	char input [40] = {0};
	puts(
		"02-fmtstr this challenge is similar to 01-stack, "
		"the vulnerability is exactly the same but this time "
		"it wont read in enough characters to actually overflow. "
		"This one relys on using a format string exploit to put "
		"more characters in then whats possible. reminder the buffer "
		"is 40 bytes long but this will only read 20 bytes."
	);

    printf("address of changeme: %p\n", &changeme);

	printf("input > ");

	gets(input);

	printf("changeme: %d\n", changeme);
	printf("input: ");
    printf(input);

	if (changeme != 0) {
		win();
	} else {
		fail();
	}

	return 0;
}
