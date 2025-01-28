#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list
 * @value: value to search for
 *
 * Return: pointer to first node where value is located or NULL if not found
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *prev;

	if (!list)
		return (NULL);

	node = list;

	/* use the express lane to find the range */
	while (node->express)
	{
		printf("Val at[%lu] = [%d]\n", node->express->index, node->express->n);

		if (node->express->n >= value)
			break;
		node = node->express;
	}

	/* Record the range where the value might be */
	prev = node;

	/* If the express lane ends, move to the end of the list */
	if (!node->express)
	{
		while (node->next)
			node = node->next;
	}
	printf("Value found btw index [%lu] and [%lu]\n", prev->index, node->index);

	/* perform a linear search within the range */
	while (prev)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);

		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
