#include "search_algos.h"

/**
 * binary_search - search for value in a sorted array of int using bin search
 * @array: array to be searched
 * @size: size of the array
 * @value: target value to be searched
 * Return: the index of the target value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int mid, i;
	int left = 0;
	int right = ((int)size - 1);

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in an array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (left < right)
				printf(", ");
		}
		printf("\n");

		mid = left + (right - left) / 2;

		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}
