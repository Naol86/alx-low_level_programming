#include "main.h"

/**
 * length - length of string
 * @s: string
 * Return: unsigned int
 */

unsigned int length(const char *s)
{
	unsigned int count = 0;

	while (s[count] != '\0')
	{
		if (s[count] != '0' && s[count] != '1')
			return (0);
		count++;
	}
	return (count);
}

/**
 * binary_to_uint - change binary into decimal
 * @b: binary string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = length(b);
	unsigned int decimal = 0, i;

	if (count < 1)
		return (0);

	for (i = 0; i < count; i++)
	{
		if (b[i] == '0')
			continue;
		decimal += 1 << (count - 1 - i);
	}
	return (decimal);
}
