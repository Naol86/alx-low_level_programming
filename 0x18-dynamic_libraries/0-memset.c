#include "main.h"

/**
 * _memset - change the value of array address
 * @s: array
 * @b: change into
 * @n: up to index
 * Return: char*
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
