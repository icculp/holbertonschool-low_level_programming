#include "3-calc.h"

/**
* op_add - Adds two ints
* @a: First int
* @b: Second int
* Return: Sum of a and b
*/

int op_add(int a, int b)
{
	return ((a) + (b));
}

/**
* op_sub - Finds difference of two ints
* @a: First int
* @b: Second int
* Return: Difference of a and b
*/

int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
* op_mul - Multiplies two ints
* @a: First int
* @b: Second int
* Return: Product of a and b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - Divides two ints
* @a: First int
* @b: Second int
* Return: Quotient of a and b
*/

int op_div(int a, int b)
{
	return ((a) / (b));
}

/**
* op_mod - Find remainder of division of two ints
* @a: First int
* @b: Second int
* Return: Remainder of division
*/

int op_mod(int a, int b)
{
	return ((a) % (b));
}
