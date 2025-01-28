#include "search_algos.h"
#include <math.h>

/**
 * jump_list - search for value in sorted linked list using jump search algo
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in the list
 * @value: target value
 *
 * Return: Pointer to first node where value is located or NULL if not found
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, prev;
	listint_t *current, *prev_node;

	if (!list || size == 0)
		return (NULL);

	step = sqrt(size);
	current = list;
	prev = 0;

	/*perform jump search*/
	while (current->index < size && current->index < prev)
	{
		prev_node = current;
		prev += step;

		while (current->next && current->index < prev)
			current = current->next;

		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

		if (current->n >= value || !current->next)
			break;
	}

	printf("Val seen btw indx [%lu] & [%lu]\n", prev_node->index, current->index);

	/* perform linear search */
	current = prev_node;
	while (current && current->index <= size && current->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

		if (current->n == value)
			return (current);
		current = current->next;
	}

	return (NULL);
}
