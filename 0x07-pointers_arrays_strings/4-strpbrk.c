#include "main.h"

/**
 * _strpbrk - function name
 * @s: array
 * @accept: array 2
 * Return: char*
 */

char *_strpbrk(char *s, char *accept)
{
int i = 0;
int j;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
return (s+i);
}
j++;
}
i++;
}
return (NULL);
}
