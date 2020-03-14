#include "variadic_functions.h"

/**
* _strlen - Determines the length of the string manually
* @s: Pointer to array of characters
* Return: Value of length
*/

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
* print_all - Prints every argument passed
* @format: Character array indicating datatype of arguments
*/

void print_all(const char * const format, ...)
{
	va_list arglist;
	int i = 0, n;
	int tempargi;
	char tempargc;
	char *tempargs;
	float tempargf;

	n = 4;/*_strlen(format);*/
	if (n == 0)
		return;
	va_start(arglist, n);
	while (i < n)
	{
		switch (format[i])
		{
			case 'c':
				tempargc = va_arg(arglist, int);
				printf("%c", tempargc);
				break;
			case 'i':
				tempargi = va_arg(arglist, int);
				printf("%d", tempargi);
				break;
			case 'f':
				tempargf = va_arg(arglist, double);
				printf("%f", tempargf);
				break;
			case 's':
				tempargs = va_arg(arglist, char *);
				printf("%s", tempargs);
				break;
			default:
				continue;
		}
		if (i < n - 1)
			printf(", ");
		i++;
	}
	va_end(arglist);
	printf("\n");
}
