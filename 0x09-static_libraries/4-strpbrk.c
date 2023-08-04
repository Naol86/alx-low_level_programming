#include "main.h"
/**
 * _strpbrk - counts the  occurence in memory
 *@s: the array
 *@accept: charcter that is searched
 *Return: the number of occurences
 */
char *_strpbrk(char *s, char *accept)
{
int i;
int j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}
return (0);
}
