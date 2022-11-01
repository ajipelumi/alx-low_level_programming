#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: pointer to text file to be read and printed
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd_r, fd_w;
	int fd;

	if (filename == NULL) /* if text file does not exist */
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1) /* if the file cannot be opened */
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL) /* if there is no space in memory */
	{
		return (0);
	}
	fd_r = read(fd, buffer, letters);
	if (fd_r == -1) /* if the file cannot be read */
	{
		return (0);
	}
	fd_w = write(STDOUT_FILENO, buffer, fd_r);
	if (fd_w == -1 || fd_w != fd_r) /* if write fails or bytes read != write */
	{
		return (0);
	}
	free(buffer);
	close(fd);
	return (fd_w);
}
