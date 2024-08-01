#include "lists.h"

/**
 * list_len - prints no of elements
 * @h: the head
 * Return: the no of nodes
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
