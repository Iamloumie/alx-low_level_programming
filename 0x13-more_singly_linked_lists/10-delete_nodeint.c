#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t
 * @head: pointer to pointer of the first node in the list
 * @index: index of the node to delete (starts at 0)
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr_node, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	curr_node = *head;
	for (i = 0; i < index - 1 && curr_node != NULL; i++)
	{
		curr_node = curr_node->next;
	}

	if (curr_node == NULL || curr_node->next == NULL)
		return (-1);

	temp = curr_node->next;
	curr_node->next = temp->next;
	free(temp);

	return (1);
}
