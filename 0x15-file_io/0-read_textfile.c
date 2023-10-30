#include "main.h"
/**
 * read_textfile - funcion that reads a text file and print
 * @filename: filename to read
 * @letters: number of  bytes to read
 * Return: number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char *buff;

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff =  malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	bytes = read(fd, buff, letters);
	bytes = write(STDOUT_FILENO, buff, O_RDONLY);
	close(fd);

	return (bytes);
}
