#include "main.h"

/**
 * get_endianness - Get the endianness object
 * Return: int
 */

int get_endianness(void)
{
	unsigned int temp = 1;
	char *s = (char *)&temp;

	return (*s);
}
