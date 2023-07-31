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
char *temp = NULL;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
temp = s + i;
return (temp);
}
j++;
}
i++;
}
return (temp);
}
