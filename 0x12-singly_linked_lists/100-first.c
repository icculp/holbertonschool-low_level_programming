#include "lists.h"

/**
* pb4main - Prints a sentence before main executes
*/

void pb4main (void) __attribute__ ((constructor))
{
	printf("You're beat! and yet, you must allow,\n
		I bore my house upon my back!\n");
}
