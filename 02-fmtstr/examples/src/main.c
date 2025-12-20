#include <stdio.h>

int main(void){

	/* Writing data with printf */
	int changeme = 0xDEADBEEF;

	/* prints 10 bytes (AAA...), not including flags/formatters */
	/* which causes it to write 10 into that address */
	printf("AAAAAAAAAA%n\n", &changeme);
	printf("changeme = %x\n", changeme);
	printf("changeme = %d\n", changeme);

	/* -- program output --
	 * AAAAAAAAAA
	 * changeme = a
	 * changeme = 10
	 */

    int printcount = 0;
	printf("writing bytes: %1322d%n\n", 4, &printcount);
    printf("printcount = %d\n", printcount);

    /* == program out --
     * .................
     * ......spaces.....
     * .................
     * ...........4\n
     * printcount = 1337
     */

	return 0;
}
