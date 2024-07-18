#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: incoming elements member
 * @size: incoming size of the elements
 * Return: returns the pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size;
	void *new_array;

	if (nmemb == 0 || size ==  0)
		return (NULL);

	total_size = nmemb * size;
	if (total_size / size != nmemb)
	{
		return (NULL);
	}
	new_array = malloc(total_size);
	if (new_array == NULL)
	{
		return (NULL);
	}
	memset(new_array, 0, total_size);
	return (new_array);
}
