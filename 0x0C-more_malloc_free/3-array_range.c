#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: incoming minimum integer
 * @max: incoming maximum integer
 * Return: return pointer to new array
 */

int *array_range(int min, int max)
{
	int *ptr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
	free(ptr);
}
