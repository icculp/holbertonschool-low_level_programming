#include "variadic_functions.h"

/**
* _pstr - Prints char* for temparg
* @tempargs: Temp arg var to prevent multiple iteration
*/

void _pstr(char *tempargs)
{
	if (tempargs == NULL)
		tempargs = "(nil)";
	printf("%s", tempargs);
}

/**
* _sep - Prints separator if i < n - 1
* @i: iterator
* @n: Length of format
*/

void _sep(int i, int n)
{
		if (i < n - 1)
			printf(", ");
}

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

	n = _strlen(format);
	va_start(arglist, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				tempargc = va_arg(arglist, int);
				printf("%c", tempargc);
				_sep(i, n);
				break;
			case 'i':
				tempargi = va_arg(arglist, int);
				printf("%d", tempargi);
				_sep(i, n);
				break;
			case 'f':
				tempargf = va_arg(arglist, double);
				printf("%f", tempargf);
				_sep(i, n);
				break;
			case 's':
				tempargs = va_arg(arglist, char *);
				_pstr(tempargs);
				_sep(i, n);
				break;
			default:
				break;
		}
		i++;
	}
	va_end(arglist);
	printf("\n");
}
