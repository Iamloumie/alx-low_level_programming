#include "lists.h"

/**
 * dlistint_len - print all element of dlistint_t list
 *
 * @h: the head pointer ofthe list/to the list
 *
 * Return: returns the number of node in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t element_no = 0;

	while (h)
	{
		element_no += 1;
		h = h->next;
	}

	return (element_no);
}
