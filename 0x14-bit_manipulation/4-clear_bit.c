#include "main.h"
/**
 * clear_bit - change into 0
 * @n: number
 * @index: index
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int temp = 1 << index, ans;

	if (index > 64 || temp > *n)
		return (-1);

	ans = (*n | temp) - temp;
	*n = ans;
	return (1);
}
