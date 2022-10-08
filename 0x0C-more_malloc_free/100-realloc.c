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
	char *new_ptr;

	if (new_size == old_size)
	{
	return (ptr);
	}
	if (ptr == NULL)
	{
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
	return (NULL);
	}
	free(ptr);
	return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
	return (NULL);
	}
	_memcpy(new_ptr, ptr, old_size);
	free(ptr);
	return (new_ptr);
	free(new_ptr);
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
