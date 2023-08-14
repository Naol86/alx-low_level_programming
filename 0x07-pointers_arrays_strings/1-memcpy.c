#include "main.h"

/**
 * _memcpy - copy the value of array in another array
 * @dest: - array one
 * @src: array two
 * @n: index of array
 * Return: char*
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
