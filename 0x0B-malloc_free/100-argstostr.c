#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates the arguments given
 * @ac: the number of argumnts
 * @av: the arguments
 *
 * Return: the concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *arg;

	size = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		for (; av[i][j] != '\0'; j++)
		{
			size++;
		}
		size++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	i = 0;
	for (; i < ac; i++)
	{
		j = 0;
		for (; av[i][j] != '\0'; j++)
		{
			arg[k] = av[i][j];
			k++;
		}
		arg[k] = '\n';
		k++;
	}
	arg[k] = '\0';
	return (arg);
}
