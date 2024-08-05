#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer of the first node in the list
 * @idx: index where the new node should be added (starts at 0)
 * @n: data to be added in the new node
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *curr_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	curr_node = *head;
	for (i = 0; i < idx - 1 && curr_node != NULL; i++)
	{
		curr_node = curr_node->next;
	}

	if (curr_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = curr_node->next;
	curr_node->next = new_node;

	return (new_node);
}
