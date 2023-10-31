#include "main.h"
/**
 * append_text_to_file - appends text at the file end
 * @filename: name of file
 * @text_content: string to add at the file end
 *
 * Return: on success 1 and -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int bytes;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;
		bytes = write(fd, text_content, nletters);

		if (bytes == -1)
		return (-1);
	}
	close(fd);

	return (1);
}
