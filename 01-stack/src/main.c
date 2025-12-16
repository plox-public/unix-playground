#include <stdio.h>
#include <unistd.h>

void win(void){
	printf("\nsuccess!\n");
};

void fail(void){
	printf("\nfailure...\n");
};

int main(void) {
	puts(
		"this is a basic stack overflow challenge. "
		"the buffer that holds your input is 40 bytes. "
		"however the program will let you write 120 bytes. "
		"overflow the input buffer to overwrite the "
		"changeme variable."
	);

	char input [40] = {0};
	int changeme = 0;

	printf("input > ");
	fgets(input, 120, stdin);

	if (changeme != 0) {
		win();
	} else {
		fail();
	}

	printf("changeme: %d\n", changeme);
	printf("input: %s\n", input);

	return 0;
}
