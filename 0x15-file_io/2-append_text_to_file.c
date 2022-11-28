#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

int _strlen(char *str);
/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: the name of the file
 * @text_content: a NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd_w;
	int fd, len;

	if (filename == NULL) /* if text file does not exist */
	{
		return (-1);
	}
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1) /* if the file cannot be opened */
	{
		return (-1);
	}
	len = _strlen(text_content); /* get string length */
	fd_w = write(fd, text_content, len);
	if (fd_w == -1 || fd_w != len) /* if write fails */
	{
		return (-1);
	}
	close(fd); /* clean up */
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
	/* loop through string */
	for (i = 0; str[i] != '\0'; i++)
	{
		len++; /* increase length */
	}
	return (len);
}
