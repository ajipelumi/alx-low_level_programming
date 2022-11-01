#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define MAX 1024

void file_copy(char *src, char *dest);

/**
 * main - copies the content of a file to another file
 *
 * @argc: argument count
 * @argv: argument vectors
 *
 * Return: (0), Success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_copy(argv[1], argv[2]);
	return (0);
}

/**
 * file_copy - copies the content of a file to another file
 *
 * @src: file to be copied
 * @dest: destination file
 *
 * Return: void
 */

void file_copy(char *src, char *dest)
{
	char buffer[MAX];
	int fd1, fd2, fd_r, fd_w, close1, close2;

	fd1 = open(src, O_RDONLY);
	if (src == NULL || fd1 == -1) /* if file can't be opened */
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	fd2 = open(dest, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 == -1) /* if file nannot be created */
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		exit(99);
	}
	while ((fd_r = read(fd1, buffer, MAX)) != 0) /* reads the entire file */
	{
		if (fd_r == -1) /* if file can't be read */
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
			exit(98);
		}
		fd_w = write(fd2, buffer, fd_r);
		if (fd_w == -1 || fd_w != fd_r) /* if write fails */
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}
	close1 = close(fd1);
	if (close1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close1);
		exit(100);
	}
	close2 = close(fd2);
	if (close2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close2);
		exit(100);
	}
}
