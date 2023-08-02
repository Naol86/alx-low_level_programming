#include "main.h"

/**
 * length - find length of a string
 * @s: *char
 * Return: int
 */

int length(char *s)
{
int x = 0;
while (s[x] != '\0')
{
x++;
}
return (x);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: char
 * Return: int
 */

int is_palindrome(char *s)
{
int len = length(s);
int mid = len / 2;
int x = 0;
len--;
while (x < mid)
{
if (s[x] != s[len - x])
return (0);
x++;
}
return (1);
}
