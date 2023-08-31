#include "main.h"

/**
 * power - power of x to y
 * @x: base int
 * @y: expo unsigned int
 * Return: unsigned int
 */

unsigned int power(int x, unsigned int y)
{
	unsigned int count = 1, i;

	for (i = 0; i < y; i++)
	{
		count *= x;
	}
	return (count);
}

/**
 * print_binary - print binary number from decimal
 * @n: long int
 */

void print_binary(unsigned long int n)
{
	unsigned int count = 0;
	unsigned int diff = 0, i;

	if (n <= 1)
	{
		n == 1 ? _putchar('1') : _putchar('0');
		return;
	}
	while (n != 0)
	{
		if (n < power(2, count))
		{
			diff = diff == 0 ? 0 : diff - count - 1;
			n -= power(2, count - 1);
			for (i = 0; i < diff; i++)
				_putchar('0');
			diff = count;
			_putchar('1');
			count = 0;
			continue;
		}
		count++;
	}

	while ((diff - 1) > 0)
	{
		_putchar('0');
		diff--;
	}
}
