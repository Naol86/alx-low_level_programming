#include "main.h"

/**
 * flip_bits - count flip
 * @n: number 1
 * @m: number 2
 * Return: unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp = n ^ m;
	unsigned int count = 0;

	while (temp)
	{
		if ((temp >> 1) * 2 < temp)
			count++;
		temp = temp >> 1;
	}

	return (count);
}
