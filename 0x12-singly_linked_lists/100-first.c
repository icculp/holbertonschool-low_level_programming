#include "lists.h"

/**
* pb4main - Prints a sentence before main executes
*/

void pb4main(void) __attribute__((constructor));

void pb4main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
