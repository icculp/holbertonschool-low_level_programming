#include "holberton.h"

/**
* fooroot - guessing function for sqrt_recursion
* @n: number to be rooted
* @guess: guess number for the root
* Return: possible sqrt
*/

int fooroot(int n, int guess)
{
	if (guess * guess > n)
		return (-1);
	else if (guess * guess < n)
		return (fooroot(n, guess + 1));
	else
		return (guess);
}

/**
* _sqrt_recursion - Returns the sqrt of a number
* @n: Number to be rooted
* Return: sqrt of n
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (fooroot(n, 1));
}
