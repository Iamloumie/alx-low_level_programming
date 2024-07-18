#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates memory
 * @ptr: pointer to the old memory size
 * @old_size: size of bytes in the old memory
 * @new_size: size of bytes of the new memory
 * Return: returns the new allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		memcpy(new_ptr, ptr, old_size);
	}
	else
	{
		memcpy(new_ptr, ptr, new_size);
	}
	return (new_ptr);
	free(new_ptr);
}
