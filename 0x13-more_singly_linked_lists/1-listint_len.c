#include "lists.h"

/**
 * listint_len - prints number of nodes
 * @h: the head that points to first node
 * Return: no of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
