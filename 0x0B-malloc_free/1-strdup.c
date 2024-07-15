#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that allocates memory for copied string
 * @str: source string
 * Return: returns the copied array pointer
 */

char *_strdup(char *str)
{
	char *new_array;
	int i, size = 0;

	/**
	 * new_array: the new pointer for the copied string
	 * @i: the destination string index
	 * @size: the source string index
	 */

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}

	new_array = malloc(sizeof(char) * (size + 1));

	if (new_array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new_array[i] = str[i];
	}
	new_array[i] = '\0';

	return (new_array);
	free(new_array);
}
