#include "search_algos.h"

/**
 * print_array - prints array section being searched
 * @array: array to print
 * @left: left to index
 * @right: right index
 */

void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search_recursive - helper func dt performs recursive binary search
 * @array: array to search in
 * @left: left index of current subarray
 * @right: right index of current subarray
 * @value: target value
 * Return: index of first occurence of value or -1 if not found
 */

int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid;
	int left_result, right_result;

	if (left > right)
		return (-1);

	/* Prints current array being searched*/
	print_array(array, left, right);

	mid = left + (right - left) / 2;

	/* If middle element us what we are looking for*/
	if (array[mid] == value && (mid == left || array[mid - 1] != value))
	{
		return (mid);
	}

	/* If value is less than or equal to mid, search left*/
	if (array[mid] >= value)
	{
		left_result = binary_search_recursive(array, left, mid - 1, value);
		return (left_result);
	}

	/* Otherwise search right */
	right_result = binary_search_recursive(array, mid + 1, right, value);
	return (right_result);
}

/**
 * advanced_binary - searches for first occurence of a value in sorted array
 * @array: array to be searched
 * @size: size of array
 * @value: target value
 * Return: index of first occurence of value , or -1 if not found
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	{
		return (-1);
	}
	return (binary_search_recursive(array, 0, size - 1, value));
}
