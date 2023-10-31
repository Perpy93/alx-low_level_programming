#include "main.h"
#include <stdio.h>

/**
 * error_file - check for open files and sort errors
 * @file_source: initial file source
 * @file_dest: file destination
 * @argv: argument vector
 * Return: void
 */
void error_file(int file_source, int file_dest, char *argv[])
{
	if (file_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - function that copies one filde content to another
 * @argc: argument count
 * @argv: argumnt passed
 *
 * Return: on success returns 0
 */
int main(int argc, char *argv[])
{
	int file_source, file_dest, err_close;
	ssize_t nchars, nwr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: copy file_source file_dest");
		exit(97);
	}

	file_source = open(argv[1], O_RDONLY);
	file_dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_source, file_dest, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_source, buff, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(file_dest, buff, nchars);
			if (nwr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file_source);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_source);
		exit(100);
	}
	err_close = close(file_dest);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_dest);
		exit(100);
	}
	return (0);
}
