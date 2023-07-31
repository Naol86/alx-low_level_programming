#include "main.h"

/**
 * _strchr - function that prints the rest start from c
 * @s: array
 * @c: char
 * Return: char*
 */

char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
return (s + i);
}
i++;
}
return (NULL);
}
