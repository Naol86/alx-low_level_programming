#include "main.h"

/**
 * _strncat - string concatenating
 * @dest: pointer to string 1
 * @src: pointer to string 2
 * @n: int
 * Return: char*
 */

char *_strncat(char *dest, char *src, int n)
{
int len = 0;
int i = 0;
while (dest[len] != '\0')
{
len++;
}
while (i < n && src[i] != '\0')
{
dest[len++] = src[i++];
}
return (dest);
}
