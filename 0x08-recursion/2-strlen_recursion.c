#include "main.h"

/**
 * _strlen_recursion - length of string
 * @s: string
 * Return: int
 */

int _strlen_recursion(char *s)
{
int n = 1;
if (*s == '\0')
{
return (0);
}
else
{
s++;
n = n + _strlen_recursion(s);
return (n);
}
}
