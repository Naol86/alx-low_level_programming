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
x++;
return (x);
}

/**
 * check - check string
 * @s: string
 * @start: int
 * @end: int
 * Return: int
 */

int check(char *s, int start, int end)
{
if (start > end)
return (1);
if (s[start] != s[end])
return (0);
if (start == end)
return (1);
start++;
end--;
return (check(s, start, end));
}
/**
 * is_palindrome - check if a string is a palindrome
 * @s: char
 * Return: int
 */
int is_palindrome(char *s)
{
int len = length(s) - 1;
int mid = len / 2;
int ans = check(s, 0, len);
return (ans);
}
