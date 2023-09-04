#include "main.h"

/**
 * read_textfile - read from file
 * @filename: name of the file
 * @letters: size of letters to read
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, sizeof_char, post;
	char *str;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file < 0)
	{
		close(file);
		return (0);
	}

	str = malloc(sizeof(char) * letters);

	if (!str)
	{
		free(str);
		return (0);
	}

	sizeof_char = read(file, str, letters);

	if (sizeof_char < 0)
	{
		close(file);
		free(str);
		return (0);
	}

	post = write(STDOUT_FILENO, str, sizeof_char);

	if (post < 0)
	{
		free(str);
		return (0);
	}

	close(file);

	free(str);
	return (post);
}
