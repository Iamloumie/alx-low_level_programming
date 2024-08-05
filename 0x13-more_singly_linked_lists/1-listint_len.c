#include "lists.h"

/**
 * listint_len - prints the number of elements in a linked list
 * @h: the list to traverse
 * Return: returns the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *head = h;

	while (head)
	{
		count++;
		head = head->next;
	}

	return (count);
}
