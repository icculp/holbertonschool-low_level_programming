#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_name - Prints a name
* @name: Name to print
* @f: function pointer
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
