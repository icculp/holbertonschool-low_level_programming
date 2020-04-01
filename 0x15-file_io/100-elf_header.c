#include <elf.h>
#include "holberton.h"

/**
* main - Displays info contained in ELF header
* @argc: Number of args
* @argv: Args vars
* Return: Success
*/

int main(int argc, char **argv)
{
	int o, r, c;
	Elf64_Ehdr header;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	o = open(argv[1], O_RDONLY);
	if (o == -1)
		dprintf(STDERR_FILENO, "Your file sucks\n"), exit(98);
	r = read(o, &header, sizeof(header));
	if (r == -1)
		dprintf(STDERR_FILENO, "Your file sucks\n"), exit(98);
	if (header.e_type == 0x7f &&
		header.e_ident[1] == 'E' &&
		header.e_ident[2] == 'L' &&
		header.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(STDERR_FILENO, "Your file sucks\n"), exit(98);
	c = close(o);
	if (c == -1)
		dprintf(STDERR_FILENO, "Can't close this m'f, shit"), exit(98);
	return (0);
}
