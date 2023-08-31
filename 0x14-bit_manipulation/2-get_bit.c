#include "main.h"

/**
 * get_bit - Get the bit object
 * @n: long int
 * @index: unsigned int
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int temp, count = 0;

	temp = 2 << (index - 1);

	if (temp > n)
		return (-1);

	while (n != 0)
	{
		if (n < (unsigned long int)(2 << count))
		{
			n -= 2 << (count - 1);
			if (count == index)
				return (1);
			if (count < index)
				return (0);
			count = 0;
			continue;
		}
		count++;
	}
	return (0);
}
