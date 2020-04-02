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
* pclass - Prints the class of elf file
* @header: elf header struct
*/

void pclass(Elf64_Ehdr header)
{
	printf("  Class:                             ");
	if (header.e_ident[4] == 2)
		printf("ELF64");
	if (header.e_ident[4] == 1)
		printf("ELF32");
	if (header.e_ident[4] == 0)
		printf("none");
	printf("\n");

}

/**
* pdata - Prints the data of elf file
* @header: elf header struct
*/

void pdata(Elf64_Ehdr header)
{
	printf("  Data:                              ");
	if (header.e_ident[5] == 1)
		printf("2's complement, little endian");
	if (header.e_ident[5] == 2)
		printf("2's complement, big endian");
	if (header.e_ident[5] == 0)
		printf("none");
	printf("\n");

}

/**
* pversion - Prints the version of elf file
* @header: elf header struct
*/

void pversion(Elf64_Ehdr header)
{
	printf("  Version:                           ");
	if (header.e_ident[6] == 1)
		printf("1 (current)");
	else
		printf("1");
	printf("\n");

}

/**
* p_os_abi - Prints the version of elf file
* @header: elf header struct
*/

void p_os_abi(Elf64_Ehdr header)
{
	printf("  OS/ABI:                            ");
	if (header.e_ident[7] == 0)
		printf("UNIX - System V");
	else if (header.e_ident[7] == 1)
		printf("UNIX - HP-UX");
	else if (header.e_ident[7] == 2)
		printf("UNIX - NetBSD");
	else if (header.e_ident[7] == 3)
		printf("UNIX - Linux");
	else if (header.e_ident[7] == 4)
		printf("UNIX - GNU Hurd");
	else if (header.e_ident[7] == 6)
		printf("UNIX - Solaris");
	else if (header.e_ident[7] == 7)
		printf("UNIX - AIX");
	else if (header.e_ident[7] == 8)
		printf("UNIX - IRIX");
	else if (header.e_ident[7] == 9)
		printf("UNIX - FreeBSD");
	else if (header.e_ident[7] == 10)
		printf("UNIX - Tru64");
	else if (header.e_ident[7] == 11)
		printf("Novell - Modesto");
	else if (header.e_ident[7] == 12)
		printf("UNIX - OpenBSD");
	else
		printf("<unknown: %x>", header.e_ident[7]);
	printf("\n");

}

/**
* pabiver - Prints the version of elf file
* @header: elf header struct
*/

void pabiver(Elf64_Ehdr header)
{
	printf("  ABI Version:                       ");
	printf("%d", header.e_ident[8]);
	printf("\n");

}


/**
* ptype - Prints the type of elf file
* @header: elf header struct
*/

void ptype(Elf64_Ehdr header)
{
	printf("  Type:                              ");
	if (header.e_type == 2)
		printf("EXEC (Executable file)");
	else if (header.e_type == 3)
		printf("DYN (Shared object file)");
	printf("\n");

}

/**
* pentry - Prints the version of elf file
* @header: elf header struct
*/

void pentry(Elf64_Ehdr header)
{
	printf("  Entry point address:               ");
	printf("%p", (void *)&header.e_entry);
	printf("\n");

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
	pclass(header);
	pdata(header);
	pversion(header);
	p_os_abi(header);
	pabiver(header);
	ptype(header);
	pentry(header);

	c = close(o);
	if (c == -1)
		dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", c), exit(98);
	return (0);
}
