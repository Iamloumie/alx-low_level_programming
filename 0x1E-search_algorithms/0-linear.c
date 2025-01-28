#include "search_algos.h"

/**
 * linear_search - search for a value in array of int using search algo
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to be searched in the array
 * Return: The index of the searched value or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
