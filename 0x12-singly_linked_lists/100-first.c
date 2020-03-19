#include <stdio.h>

/**
* pbmain - Prints a sentence before main executes
* Return: void
*/


void __attribute__ ((constructor)) pbmain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
