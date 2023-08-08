#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	int wordCount = 0;
	int i = 0;
	int len = strlen(str);
	int j;
	int start;
	int wordIndex;
	int wordLength;
	char **words = NULL;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	while (i < len)
	{
		while (i < len && str[i] == ' ')
		{
			i++;
		}
		if (i < len && str[i] != ' ')
		{
			wordCount++;
			while (i < len && str[i] != ' ')
			{
				i++;
			}
		}
	}

	words = (char **)malloc((wordCount + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	}

	i = 0;
	wordIndex = 0;

	while (i < len)
	{
		while (i < len && str[i] == ' ')
		{
			i++;
		}
		if (i < len && str[i] != ' ')
		{
			start = i;

			while (i < len && str[i] != ' ')
			{
				i++;
			}
			wordLength = i - start;

			words[wordIndex] = (char *)malloc((wordLength + 1) * sizeof(char));
			if (words[wordIndex] == NULL)
			{
				for (j = 0; j < wordIndex; j++)
				{
					free(words[j]);
				}
				free(words);
				return (NULL);
			}
			strncpy(words[wordIndex], &str[start], wordLength);
			words[wordIndex][wordLength] = '\0';
			wordIndex++;
		}
	}

	words[wordIndex] = NULL;
	return (words);
}

