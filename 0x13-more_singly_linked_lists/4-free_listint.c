#include "lists.h"

/**
 * free_listint - frees listint_t
 * @head: the head to the first node
 */

void free_listint(listint_t *head)
{
	listint_t *new_node;
	listint_t *next;

	new_node = head;
	while (new_node != NULL)
	{
		next = new_node->next;
		free(new_node);

		new_node = next;
	}
}
