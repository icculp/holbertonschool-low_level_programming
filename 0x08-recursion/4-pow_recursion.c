#include "holberton.h"

/**
* _pow_recursion - Returns x raised to y power using recursion
* @x: Integer base
* @y: Integer exponent
* Return: x raised to the power of y
*/

int _pow_recursion(int x, int y)
{
	if (x == 0)
		return (0);
	else if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
