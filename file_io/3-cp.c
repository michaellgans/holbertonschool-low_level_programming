#include "main.h"

/**
 * cp_file - coppies the content of a file to another file
 * @file_from: pointer to old file
 * @file_to: pointer to new file
 * Return: 1
 */

int cp_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	char *buffer;
	ssize_t bytesRead, bytesWritten;
	off_t file_size;

	/* Open file_from */
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		return (-1); /* Error if can't open */

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		return (-1); /* Error if can't open */

	/* Allocate memory for buffer */
	file_size = lseek(fd_from, 0, SEEK_END);
	lseek(fd_from, 0, SEEK_SET);
	buffer = malloc(file_size);
	if (buffer == NULL)
	{
		return (-1);
	}

	/* Read and Write at the same time */
	while ((bytesRead = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytesWritten = write(fd_to, buffer, bytesRead);
		if (bytesWritten == -1)
			return (-1); /* Error writing */
	}

	if (bytesRead == -1)
	{
		return (-1);
	}

	close(fd_from);
	close(fd_to);

	return (1);
}
