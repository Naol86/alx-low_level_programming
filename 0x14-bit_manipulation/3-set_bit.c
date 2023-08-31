#include "main.h"
/**
 * set_bit - Set the bit object
 * @n: long int
 * @index: index
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int temp, add, count = 0;
	unsigned long int num = *n, ans;

	add = 2 << (index - 1);
	ans = *n + add;

	if (index == 0)
	{
		*n = (num % 2 == 0 ? *n + 1 : *n);
		return (1);
	}

	temp = 2 << (index - 1);

	if (temp > *n)
	{
		*n = temp + *n;
		return (1);
	}

	while (num != 0)
	{
		if (num < (unsigned long int)(2 << count))
		{
			num -= 2 << (count - 1);
			if (count == index)
				return (1);
			if (count < index)
			{
				*n = ans;
				return (1);
			}
			count = 0;
			continue;
		}
		count++;
	}
	*n = ans;
	return (1);
}
