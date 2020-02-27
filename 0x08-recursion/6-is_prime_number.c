#include "holberton.h"

/**
* fooprime - guessing function for sqrt_recursion
* @n: number to be rooted
* @guess: guess number for the root
* Return: possible sqrt
*/

int fooprime(int n, int guess)
{
	if (n % guess == 0)
		return (0);
	if (guess < n / 2)
		return (fooprime(n, guess + 1));
	else
		return (1);
}

/**
* is_prime_number - Determines if a number is prime
* @n: Number to be checked
* Return: 1 if yes 0 if no
*/

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	else if (n == 1)
		return (0);
	else if (n % 2 == 0)
		return (0);
	return (fooprime(n, 3));
}
