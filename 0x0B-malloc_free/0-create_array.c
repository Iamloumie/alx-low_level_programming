#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - function that creates the array
 * @size: length of the array
 * @c: incoming char
 * Return: returns the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	/**
	 * @array: the array pointer
	 * @i: the array index
	 */

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
	free(array);
}
