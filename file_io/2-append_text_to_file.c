#include "main.h"

/**
 * append_text_to_file - adds text at the end of the file
 * @filename: pointer to file
 * @text_content: content of file
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	/* Declare Variables */
	int fd;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0600);
	if (fd == -1)
		return (-1); /* Error if file won't open */

	bytesWritten = write(fd, text_content, strlen(text_content));
	if (bytesWritten == -1)
		return (-1);

	close(fd);
	return (1);
}
