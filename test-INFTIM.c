/*
 * Linux doesn't (always?) have this.
 */

#include <poll.h>

int
main(void)
{
	printf("INFTIM is defined to be %ld\n", (long)INFTIM);
	return 0;
}
