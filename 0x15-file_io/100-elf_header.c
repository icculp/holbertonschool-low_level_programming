#include <elf.h>
#include "holberton.h"

/**
* pmagic - Prints the magic numbers of elf file
* @header: elf header struct
*/

void pmagic(Elf64_Ehdr header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%2.2x", header.e_ident[i]);
		if (i != EI_NIDENT - 1)
			printf(" ");
		else
			printf("\n");
	}
}

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
		dprintf(STDERR_FILENO, "Can't open file %s\n", argv[1]), exit(98);
	r = read(o, &header, sizeof(header));
	if (r == -1)
		dprintf(STDERR_FILENO, "Can't open file %s\n", argv[1]), exit(98);
	if (header.e_ident[0] == 0x7f &&
		header.e_ident[1] == 'E' &&
		header.e_ident[2] == 'L' &&
		header.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", argv[1]), exit(98);

	pmagic(header);

	c = close(o);
	if (c == -1)
		dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", c), exit(98);
	return (0);
}
