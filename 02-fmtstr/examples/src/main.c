#include <stdio.h>

int main(void){

	/* Writing data with printf */
	int changeme = 0xDEADBEEF;

	/* prints 10 bytes (AAA...), not including flags/formatters */
	/* which causes it to write 10 into that address */
	printf("AAAAAAAAAA%n\n", &changeme);
	printf("changeme = %x\n", changeme);
	printf("changeme = %d\n", changeme);
	/* ./build/a.out
	 * AAAAAAAAAA
	 * changeme = a
	 * changeme = 10
	 */

	printf("test: %8d\n", 4);
	return 0;
}
