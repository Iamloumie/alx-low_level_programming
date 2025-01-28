#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search a value in sorted array using jump search algo
 * @array: array to be searched
 * @size: size of the array
 * @value: the target value
 * Return: the index of the target value or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	int i, m, k, prev;

	/**
	 * i is the array index
	 * m is the jump size, reps step size for skipping elements during jump algo
	 * k is the jump size multiplier, determining next block of array to jump to
	 * prev is the index of the previous block where the search started
	 */

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	k = 0;
	prev = i = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
		k++;
		prev = i;
		i = k * m;
	} while (i < (int)size && array[i] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, i);

	for (; prev <= i && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
