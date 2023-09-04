#include "main.h"

/**
 * create_file - Create a file object
 * @filename: file name
 * @text_content: text to write on file
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int file, post;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file < 0)
		return (-1);

	if (text_content != NULL)
	{
		post = write(file, text_content, strlen(text_content));

		if (post < 0)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
