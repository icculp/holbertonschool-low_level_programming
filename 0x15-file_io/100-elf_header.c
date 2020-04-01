#include <elf.h>
#include "holberton.h"

#include <elf.h>
#include <stdio.h>

void read_elf_header(const char* elfFile) {
  // switch to Elf32_Ehdr for x86 architecture.
  Elf64_Ehdr header;

  FILE* file = fopen(elfFile, "rb");
  if(file) {
    // read the header
    fread(&header, 1, sizeof(header), file);

    // check so its really an elf file
    if (memcmp(header.e_ident, ELFMAG, SELFMAG) == 0) {
       // this is a valid elf file
    }

    // finally close the file
    fclose(file);
  }
}

/**
* main - Displays info contained in ELF header
*/

int main(int argc, char **argv)
{
	int o;
	Elf64_Ehdr header;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	
	return (0);
}
