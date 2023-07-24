#include "main.h"

/**
 * _strcpy- updates the value of the variable
 *
 * @dest: pointer to the destination
 * @src: the string to be copied
 *
 * Return: pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
int count;
int i;

count = 0;
while (src[count] != '\0')
{
count++;
}

for (i = 0; i < count; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
