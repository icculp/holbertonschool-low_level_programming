#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = flip_bits(4294967295, 4294967295);
    printf("%u\n", n);
    n = flip_bits(4294967295, 0);
    printf("%u\n", n);
    n = flip_bits(4294967295, 4294967294);
    printf("%u\n", n);
    n = flip_bits(2147483648, 2147483647);
    printf("%u\n", n);
    return (0);
}
