#include "lists.h"

/**
 * print_listint - prints all the elements in listint_t
 * @h: the head pointing to the first node
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
