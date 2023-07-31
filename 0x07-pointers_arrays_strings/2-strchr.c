#include "main.h"
#include <stdio.h>
/**
 * _strchr - returns the pointer to the first occurence in memory
 *@s: the array
 *@c: charcter that is serched
 *Return: the pointer to that array
 */
char *_strchr(char *s, char c)
{
unsigned int i;

for (i = 0; *(s + i) != '\0'; i++)
{
if (*(s + i) == c)
{
return ((s + i));
}
if (*(s + i) == 0)
{
return (0);
}
}
return (0);
}
