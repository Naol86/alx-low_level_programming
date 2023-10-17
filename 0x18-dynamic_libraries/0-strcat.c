#include "main.h"

/**
 * _strcat - concatenating
 * @dest: first string
 * @src: second string
 * Return: char*
 */

char *_strcat(char *dest, char *src)
{
int len = 0;
int i = 0;
while (dest[len] != '\0')
{
len++;
}
while (src[i] != '\0')
{
dest[len++] = src[i++];
}
return (dest);
}
