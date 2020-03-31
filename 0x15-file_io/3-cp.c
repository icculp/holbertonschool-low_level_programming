#include "holberton.h"
#include <string.h>

/**
* main - Copies one file to another
* @argc: Number of args
* @argv: Args vars
* Return: 1 on success, -1 on failure
*/

int main(int argc, char **argv)
{
	int o_to, o_from, cl_to, cl_from, len = 0, w;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	o_from = open(argv[1], O_RDONLY);
	if (o_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]), exit(98);
	o_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (o_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((len = read(o_from, buf, 1024)))
	{
		w = write(o_to, buf, len);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}}
	cl_to = close(o_to);
	if (cl_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o_to), exit(100);
	cl_from = close(o_from);
	if (cl_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o_from), exit(100);
	return (0);
}
