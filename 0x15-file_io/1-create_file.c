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
	ssize_t fd_w;
	int fd, len;

	if (filename == NULL) /* if text file does not exist */
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1) /* if the file cannot be created */
	{
		return (-1);
	}
	len = _strlen(text_content);
	fd_w = write(fd, text_content, len);
	if (fd_w == -1 || fd_w != len) /* if write fails */
	{
		return (-1);
	}
	close(fd);
	return (1);
}

/**
 * _strlen - checks for string length
 *
 * @str: string to be scanned
 *
 * Return: length of string
 */

int _strlen(char *str)
{
	int i, len = 0;

	if (str == NULL)
	{
		return (0);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
