#include "search_algos.h"
#include <math.h>

/**
 * print_array - prints the array being searched
 * @array: array being searched
 * @left: starting index
 * @right: ending index
 * Return: void
 */

void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search_exp - Binary search implementation for exponential search
 * @array: pointer to the first element of the array
 * @left: starting index
 * @right: ending index
 * @value: the target value
 * Return: Index of the value if found or -1 otherwise
 */

int binary_search_exp(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	while (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - search value in array using exponential search algo
 * @array: the array to be searched
 * @size: size of the array
 * @value: the target value
 * Return: the index of target value if found or -1 if otherwise
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t right;

	if (array == NULL || size == 0)
		return (-1);

	/* Check first element*/
	if (array[0] == value)
		return (0);

	/* Find the range for binary search */
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	/* Calculate the right boundary for the search */
	right = (bound < size) ? bound : size - 1;

	/* Print the range message */
	printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, right);

	/* Perform binary search in the found range */
	return (binary_search_exp(array, bound / 2, right, value));
}
