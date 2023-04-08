#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * read_textfile -  reads afile and prints it to the POSIX standard output
 * @filename: file to be opened
 * @letters:  number of letters it should read and print
 * Return: actual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytes_written);
}
