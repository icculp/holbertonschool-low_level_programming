#include "holberton.h"
#include <string.h>

/**
* read_textfile - Reads a textfile and prints it to POSIX stdout
* @filename: Filename to read
* @letters: Number of characters to read and print (strlen)
* Return: Num of letters read and printed, or 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r, w;
	char *buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		free(buf);
		return (0);
	}
	r = read(o, buf, letters);
	if (r == -1)
	{
		free(buf);
		return (0);
	}
	buf[r] = '\0';
	w = write(STDOUT_FILENO, buf, strlen(buf));
	if ((w == -1) | (w == 0))
	{
		free(buf);
		return (0);
	}
	if (r != w)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(o);
	return (w);
}
