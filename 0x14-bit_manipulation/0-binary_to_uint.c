#include "main.h"

/**
 * binary_to_uint - into decimal
 * @b: binary
 * Return: int number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, i;
	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal = 2 * decimal + (b[i] - '0');
	}
	return (decimal);
}
