#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void checkCon(unsigned char *Indent);
void printMagic(unsigned char *Indent);
void printClass(unsigned char *Indent);
void printData(unsigned char *Indent);
void printVersion(unsigned char *Indent);
void printAb(unsigned char *Indent);
void printOsab(unsigned char *Indent);
void printType(unsigned int e_type, unsigned char *Indent);
void printEntery(unsigned long int e_entry, unsigned char *Indent);
void closeElf(int elf);

void checkCon(unsigned char *Indent)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (Indent[index] != 127 &&
			Indent[index] != 'E' &&
			Indent[index] != 'L' &&
			Indent[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

void printMagic(unsigned char *Indent)
{
	int index;

	printf(" Magic: ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", Indent[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

void printClass(unsigned char *Indent)
{
	printf(" Class: ");

	switch (Indent[EI_CLASS])
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
		printf("<unknown: %x>\n", Indent[EI_CLASS]);
	}
}

void printData(unsigned char *Indent)
{
	printf(" Data: ");

	switch (Indent[EI_DATA])
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
		printf("<unknown: %x>\n", Indent[EI_CLASS]);
	}
}

void printVersion(unsigned char *Indent)
{
	printf(" Version: %d",
		   Indent[EI_VERSION]);

	switch (Indent[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

void printOsab(unsigned char *Indent)
{
	printf(" OS/ABI: ");

	switch (Indent[EI_OSABI])
	{
	case ELFOSABI_NONE:
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
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", Indent[EI_OSABI]);
	}
}

void printAb(unsigned char *Indent)
{
	printf(" ABI Version: %d\n",
		   Indent[EI_ABIVERSION]);
}

void printType(unsigned int e_type, unsigned char *Indent)
{
	if (Indent[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf(" Type: ");

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

void printEntery(unsigned long int e_entry, unsigned char *Indent)
{
	printf(" Entry point address: ");

	if (Indent[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
				  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (Indent[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

void closeElf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

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
		closeElf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		closeElf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	checkCon(header->Indent);
	printf("ELF Header:\n");
	printMagic(header->Indent);
	printClass(header->Indent);
	printData(header->Indent);
	printVersion(header->Indent);
	printOsab(header->Indent);
	printAb(header->Indent);
	printType(header->e_type, header->Indent);
	printEntery(header->e_entry, header->Indent);

	free(header);
	closeElf(o);
	return (0);
}
