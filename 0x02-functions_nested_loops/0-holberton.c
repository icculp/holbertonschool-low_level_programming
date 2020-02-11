#include <stdio.h>
#include "holberton.h"

/**
* _putchar - Holberton
* main - Entry
* Return: Success
*/

int main(void)
{
	char holby[] = "Holberton\n";
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(holby[i]);
	}
	return (0);
}
