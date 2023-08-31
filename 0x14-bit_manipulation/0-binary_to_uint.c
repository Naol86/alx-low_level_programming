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
		count++;
	return (count);
}

/**
 * binary_to_uint - change binary into decimal
 * @b: binary string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, len = length(b), i = 0;

	if (!b)
		return (0);

	while (b[i] && len > i)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '0')
		{
			i++;
			continue;
		}

		decimal += 1 << (len - i - 1);
		i++;
	}
	return (decimal);
}
