#include "variadic_functions.h"

/**
* print_strings - Prints strings separated by given separator
* @separator: Method of separating numbers printed
* @n: Number of numbers to print
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;

	va_start(arglist, n);
	for (i = 0; i < n; i++)
	{
		char *temparg = va_arg(arglist, char*);

		if (temparg == NULL)
			printf("(nil)");
		else
		{
			printf("%s", temparg);
		}
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(arglist);
	printf("\n");
}
