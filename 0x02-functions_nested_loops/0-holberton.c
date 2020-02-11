#include <stdio.h>
#include "holberton.h"

/**
* main - Print Holberton
*
* Return: Success
*/

int main(void)
{
	char holby[] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(holby[i]);
	}
	_putchar('\n');
	return (0);
}
