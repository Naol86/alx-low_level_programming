#include "main.h"

/**
 * _strncpy - copying string
 * @dest: *char
 * @src: *char
 * @n: int
 * Return: char*
 */

char *_strncpy(char *dest, char *src, int n)
{
int len = 0;
int i = 0;
while (i < n)
{
if (len == 1 || src[i] == '\0')
{
len = 1;
dest[i] = '\0';
i++;
}
else
{
dest[i] = src[i];
i++;
}
}
return (dest);
}
