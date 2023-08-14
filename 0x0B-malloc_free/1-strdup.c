#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - it duplicates the string
 * @str: the string to be duplicated
 *
 * Return: pointer to the array or  NULL if not
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i = 0;
	int len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	p = (char *) malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (0);
	while (str[i] != '\0')
	{
		*(p + i) = str[i];
		i++;
	}
	*(p + i) = '\0';
	return (p);
}
