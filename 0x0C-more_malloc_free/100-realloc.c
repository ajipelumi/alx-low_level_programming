#include <stdlib.h>
#include <stdio.h>
#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: memory to be reallocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: pointer to the reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;

	if (new_size == old_size)
	{
	return (ptr);
	}
	if (ptr == NULL)
	{
	ptr = malloc(new_size);
	}
	if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}
	newptr = malloc(new_size);
	if (newptr == NULL)
	{
	return (NULL);
	}
	_memcpy(newptr, ptr, old_size);
	free(ptr);
	return (newptr);
	free(newptr);
}

/**
 * _memcpy - copies memory area
 *
 * @dest: destination area
 * @src: memory area to be copied
 * @n: number of bytes to be copied
 *
 * Return: pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
