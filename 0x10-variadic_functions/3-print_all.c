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
* @separator: Method of separating numbers printed
* @n: Number of numbers to print
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
	va_start(arglist, format);
	while (format[i] != '\0')
	{
		/*printf("a%d", i);*/
		switch (format[i])
		{
			case 'c':
				tempargc = va_arg(arglist, int);
				printf("%c", tempargc);
				if (i < n - 1)
					printf(", ");
				break;
			case 'i':
				tempargi = va_arg(arglist, int);
				printf("%d", tempargi);
				if (i < n - 1)
					printf(", ");
				break;
			case 'f':
				tempargf = va_arg(arglist, double);
				printf("%f", tempargf);
				if (i < n - 1)
					printf(", ");
				break;
			case 's':
				tempargs = va_arg(arglist, char *);
				printf("%s", tempargs);
				if (i < n - 1)
					printf(", ");
				break;
			default:
				break;
		}
		i++;
		/*printf("b%d", i);*/
	}
	va_end(arglist);
	printf("\n");
}
