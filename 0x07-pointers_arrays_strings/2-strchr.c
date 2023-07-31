#include "main.h"

/**
 * _strchr - function that prints the rest start from c
 * @s: array
 * @c: char
 * Return: char*
 */

char *_strchr(char *s, char c)
{
char *temp = 0;
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
temp = s + i;
return (temp);
}
i++;
}
return (temp);
}
