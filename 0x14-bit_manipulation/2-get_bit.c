#include "main.h"
#include <stdio.h>

/**
 * get_bit - Get the bit object
 * @n: long int
 * @index: unsigned int
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int temp = n | (1 << index);

	if (index > 32)
		return (-1);

	if (temp <= n)
		return (1);

	return (0);
}
