#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

int _strlen(char *str);
/**
 * create_file - creates a file
 *
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	char *buffer;
	ssize_t fd_r, fd_w;
	int fd, len;

	if (filename == NULL) /* if text file does not exist */
	{
		return (-1);
	}
	fd = open(filename, O_RDONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1) /* if the file cannot be opened */
	{
		return (-1);
	}
	len = _strlen(text_content);
	buffer = malloc(sizeof(char) * (len + 1));
	if (buffer == NULL) /* if there is no space in memory */
	{
		return (-1);
	}
	fd_r = read(fd, buffer, len);
	buffer[len] = '\0'; /* NULL terminated string */
	if (fd_r == -1) /* if the file cannot be read */
	{
		return (-1);
	}
	fd_w = write(STDOUT_FILENO, buffer, fd_r);
	if (fd_w == -1 || fd_w != fd_r) /* if write fails or bytes read != write */
	{
		return (-1);
	}
	free(buffer);
	close(fd);
	return (1);
}

/**
 * _strlen - checks for string length
 *
 * @str - string to be scanned
 *
 * Return: length of string
 */

int _strlen(char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
