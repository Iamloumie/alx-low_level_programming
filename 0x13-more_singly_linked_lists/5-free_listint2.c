#include "lists.h"

/**
 * free_listint2 - frees listint_t
 * @head: the head to the first node
 */

void free_listint2(listint_t **head)
{
	listint_t *new_node;
	listint_t *next;

	if (head == NULL)
	{
		return;
	}

	new_node = *head;
	while (new_node != NULL)
	{
		next = new_node->next;
		free(new_node);

		new_node = next;
	}

	*head = NULL;
}
