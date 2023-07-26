#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: *char
 * @s2: *char
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
while (1)
{
if (s1[i] == '\0' && s2[i] == '\0')
{
return (0);
}
else if (s1[i] == '\0')
{
return (-15);
}
else if (s2[i] == '\0')
{
return (15);
}
i++;
}
}
