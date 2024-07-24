#include "function_pointers.h"

/**
 * array_iterator - prints elements of each array
 * @array: incoming array
 * @size: size of the array
 * @action: pointer to the function that iterates array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	/*running a NULL check on array and the pointer function */
	if (array && action)
	{
		for (i = 0; i < size; i++)
		action(array[i]);
	}
}
