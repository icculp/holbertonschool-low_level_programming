#include "variadic_functions.h"

/**
* sum_them_all - Sums a variable number of arguments
* @n: Number of args to sum
* Return: Sum of args
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(arglist, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arglist, const unsigned int);
	}
	va_end(arglist);
	return (sum);
}
