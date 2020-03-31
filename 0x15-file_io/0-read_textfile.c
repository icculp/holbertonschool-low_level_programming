#include "holberton.h"

/**
* read_textfile - Reads a textfile and prints it to POSIX stdout
* @filename: Filename to read
* @letters: Number of characters to read and print (strlen)
* Return: Num of letters read and printed, or 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r;
	char *buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	if (o == -1)
		return (0);
	r = read(o, buf, letters);
	buf[r] = '\0';
	write(STDOUT_FILENO, buf, letters);
	return (r);
}
