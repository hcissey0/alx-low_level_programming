#include <stdio.h>
#include <string.h>
#include <elf.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void err(int fd, const char *format, char *filename);
void pmagic(unsigned char *);
void pclass(unsigned char *);
void pdata(unsigned char *);
void pversion(unsigned char *);
void posabi(unsigned char *);
void pabiversion(unsigned char *);
void ptype(uint16_t);
void pentry(uint64_t);

/**
 * main - Entry point
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0 on success, error code otherwise
 */
int main(int ac, char **av)
{
	int fd = -1;
	ssize_t br;
	Elf64_Ehdr header;

	if (ac != 2)
		err(fd, "Usage: %s elf_filename\n", av[0]);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		err(fd, "Error: Cannot open file %s\n", av[1]);
	br = read(fd, &header, sizeof(header));
	if (br == -1)
		err(fd, "Error: Cannot read from file %s\n", av[1]);
	if (br != sizeof(header))
		err(fd, "Error: File %s is too short\n", av[1]);
	if (memcmp(header.e_ident, ELFMAG, (size_t)SELFMAG) != 0)
		err(fd, "Error: Not an ELF File - magic do not match\n", NULL);
	printf("ELF Header:\n");
	pmagic(header.e_ident);
	pclass(header.e_ident);
	pdata(header.e_ident);
	pversion(header.e_ident);
	posabi(header.e_ident);
	pabiversion(header.e_ident);
	ptype(header.e_type);
	pentry(header.e_entry);
	close(fd);
	return (0);
}

/**
 * err - prints error
 * @fd: the fildes
 * @format: the format of the error message
 * @filename: the filename
 */
void err(int fd, const char *format, char *filename)
{
	if (fd != -1)
		close(fd);
	dprintf(STDERR_FILENO, format, filename);
	exit(98);
}

/**
 * pmagic - prints magic numbers of ELf Header
 * @e: pointer to an array of the elf magic
 */
void pmagic(unsigned char *e)
{
	size_t i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e[i]);
		if (i < EI_NIDENT - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * pclass - prints the class of an ELF header
 * @e: a pointer to an array containing elf magic numbers
 */
void pclass(unsigned char *e)
{
	printf("  Class:                             ");
	switch (e[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %02x>\n", e[EI_CLASS]);
		break;
	}
}

/**
 * pdata - prints the data encoding of an elf header file
 * @e: an array of the magic numbers of the header file
 */
void pdata(unsigned char *e)
{
	printf("  Data:                              ");
	switch (e[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %02x>\n", e[EI_CLASS]);
		break;
	}
}

/**
 * pversion - prints the version of elf header file
 * @e: array of the elf magic numbers
 */
void pversion(unsigned char *e)
{
	printf("  Version:                           %d ", e[EI_VERSION]);
	switch (e[EI_VERSION])
	{
	case EV_NONE:
		printf("(none)\n");
		break;
	case EV_CURRENT:
		printf("(current)\n");
		break;
	default:
		printf("<unknown: %02x>\n", e[EI_VERSION]);
		break;
	}
}

/**
 * posabi - prints the OS/ABI of an elf header file
 * @e: array of magic numbers
 */
void posabi(unsigned char *e)
{
	printf("  OS/ABI:                            ");
	switch (e[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("UNIX - ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Stand-alone (embedded)\n");
		break;
	default:
		printf("<unknown: %02x>\n", e[EI_OSABI]);
		break;
	}
}

/**
 * pabiversion - prints the ABI version of an elf header file
 * @e: pointer to array of magic numbers
 */
void pabiversion(unsigned char *e)
{
	printf("  ABI Version:                       %d\n", e[EI_ABIVERSION]);
}

/**
 * ptype - prints the object file of an elf header file
 * @e: the type member of the struct
 */
void ptype(uint16_t e)
{
	printf("  Type:                              ");
	switch (e)
	{
	case ET_NONE:
		printf("NONE (none)\n");
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
		printf("<unknown: %d>\n", e);
	}
}

/**
 * pentry - prints the entry point address of the elf header file
 * @e: the entry address
 */
void pentry(uint64_t e)
{
	printf("  Entry point address:               %#lx\n", e);
}
