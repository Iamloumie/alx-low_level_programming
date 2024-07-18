#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: incoming elements member
 * @size: incoming size of the elements
 * Return: returns the pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *new_array;

	if (nmemb == 0 || size ==  0)
		return (NULL);
	new_array = malloc(nmemb * sizeof(int));
	if (new_array == NULL)
	{
		return (NULL);
	}
	return (new_array);
	free(new_array);
}
