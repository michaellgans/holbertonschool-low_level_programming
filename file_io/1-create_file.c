#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to the file
 * @text_content: pointer to contents
 * Return: 1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	close(fd);
	return (1);
}
