#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: incoming array
 * @size: array size
 * @cmp: compares values
 * Return: returns the current index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* Checks for empty array */
	if (array == NULL || cmp == NULL || size < 0)
	{
		return (-1);
	}

	/* Creates loop for the array */
	for (i = 0; i < size; i++)
	{
	/**
	 * if compared values returns a non zero value
	 * returns the current index
	 */
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
