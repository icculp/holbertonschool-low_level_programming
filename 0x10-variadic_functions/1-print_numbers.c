#include "variadic_functions.h"

/**
* print_numbers - Prints unmbers separated by given separator
* @separator: Method of separating numbers printed
* @n: Number of numbers to print
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;

	if (n == 0)
		return;
	va_start(arglist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arglist, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(arglist);
	printf("\n");
}
