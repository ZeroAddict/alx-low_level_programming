#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ID);
void print_magic(unsigned char *e_ID);
void print_class(unsigned char *e_ID);
void print_data(unsigned char *e_ID);
void print_version(unsigned char *e_ID);
void print_abi(unsigned char *e_ID);
void print_osabi(unsigned char *e_ID);
void print_type(unsigned int e_type, unsigned char *e_ID);
void print_entry(unsigned long int e_entry, unsigned char *e_ID);
void close_elf(int elf);

/**
 * print_abi - Prints the ABI version of an ELF header.
 * @e_ID: ptr to an array with an ELF ABI version.
 */
void print_abi(unsigned char *e_ID)
{
	printf("ABI Version: %d\n", e_ID[EI_ABIVERSION]);
}

/**
 * print_type - Prints ELF header type.
 * @e_type: The ELF type.
 * @e_ID: Ptr to the array with the ELF class.
 */
void print_type(unsigned int e_type, unsigned char *e_ID)
{
	if (e_ID[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("Type: ");

	switch (e_type)
		{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
		}
}

/**
 * print_entry - Prints the entry pt of the ELF header.
 * @e_entry: address of ELF entry point.
 * @e_ID: pointer to array containing the ELF class.
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ID)
{
	printf("Entry point address: ");

	if (e_ID[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ID[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - Closes the ELF file.
 * @elf: The file descrptr of the ELF file.
 *
 * Description: If close fails - exit code 98.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays the information included in the
 *        ELF header at ELF file start.
 * @argc: number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If not an ELF File or
 *              function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ID);
	printf("ELF Header:\n");
	print_magic(header->e_ID);
	print_class(header->e_ID);
	print_data(header->e_ID);
	print_version(header->e_ID);
	print_osabi(header->e_ID);
	print_abi(header->e_ID);
	print_type(header->e_type, header->e_ID);
	print_entry(header->e_entry, header->e_ID);

	free(header);
	close_elf(o);
	return (0);
}
