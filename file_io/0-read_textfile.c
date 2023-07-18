#include "main.h"

/**
 * read_textfile - reads a file and prints it to standard output
 * @filename: points to file name
 * @letters: number of letters to print
 * Return: actual number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/* Declare Variables */
	int fd;
	char *buffer;
	ssize_t bytesRead, bytesWritten;

	/* no filename */
	if (filename == NULL)
		return (0);
	/* Open a file */
	fd = open(filename, O_RDONLY);
	/* Can't be opened? */
	if (fd == -1)
		return (0);
	/* Allocate Memory */
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		return (0);
	}
	if (lseek(fd, 0, SEEK_SET) == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/* Read a file */
	bytesRead = read(fd, buffer, letters);
	/* Can't be read? */
	if (bytesRead == -1)
	{
		free(buffer);
		return (0);
	}
	/* Write to stdout */
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	free(buffer);
	close(fd);
	return (bytesWritten);
}
