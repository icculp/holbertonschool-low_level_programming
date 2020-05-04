#include <stdio.h>

/**
* add - Adds two numbers
* @a: Int a
* @b: Int b
* Return: Result
*/

int add(int a, int b)
{
	return (a + b);
}

/**
* sub - Subtracts two numbers
* @a: Int a
* @b: Int b
* Return: Result
*/

int sub(int a, int b)
{
	return (a - b);
}

/**
* mul - Multiplies two numbers
* @a: Int a
* @b: Int b
* Return: Result
*/

int mul(int a, int b)
{
	return (a * b);
}

/**
* div - Divides two numbers
* @a: Int a
* @b: Int b
* Return: Result
*/

int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	else
		return (0);
}

/**
* mod - Finds remainder of division
* @a: Int a
* @b: Int b
* Return: Result
*/

int mod(int a, int b)
{
	return (a % b);
}
