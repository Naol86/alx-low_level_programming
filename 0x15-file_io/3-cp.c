#include "main.h"

/**
 * error_exit - error tracer
 * @code: code
 * @format: format
 */
void error_exit(int code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(code);
}

/**
 * main - main function
 * @argc: int
 * @argv: string
 * Return: int
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fd_from, fd_to;
	char buffer[BUF_SIZE];

	ssize_t bytes_read, bytes_written;

	fd_from = open(file_from, O_RDONLY);

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n");

	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", file_from);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to file %s\n", file_to);

	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			error_exit(99, "Error: Can't write to file %s\n", file_to);
	}

	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file %s\n", file_from);

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", fd_from);

	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", fd_to);

	return (0);
}
