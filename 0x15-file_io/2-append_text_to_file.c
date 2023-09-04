#include "main.h"

/**
 * append_text_to_file - append text in to file
 * @filename: file name
 * @text_content: text content
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, post;

	if (!filename)
		return (-1);

	if (!text_content)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file < 0)
		return (-1);

	post = write(file, text_content, strlen(text_content));

	if (post < 0)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
