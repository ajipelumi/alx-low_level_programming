#include <stdlib.h>
#include <stdio.h>
#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: pointer to the reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr = NULL;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL) /* if ptr does not point to anything */
	{
		/* allocate memory with new size */
		new_ptr = malloc(new_size);
		if (new_ptr == NULL) /* if malloc fails */
		{
			return (NULL);
		}
		free(ptr); /* free memory previously allocated */
		return (new_ptr); /* return pointer to newly allocated memory */
	}
	if (new_size == 0 && ptr != NULL) /* equivalent of freeing ptr */
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size); /* allocate memory */
	if (new_ptr == NULL) /* if malloc fails */
	{
		return (NULL);
	}
	/* store values of previous pointer to newly allocated memory */
	_memcpy(new_ptr, ptr, old_size);
	free(ptr); /* free previous memory */
	return (new_ptr); /* return pointer to newly allocated memory */
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

	for (i = 0; i < n; i++) /* loop until n */
	{
		dest[i] = src[i]; /* store values of src in dest */
	}
	return (dest); /* return stored values */
}
