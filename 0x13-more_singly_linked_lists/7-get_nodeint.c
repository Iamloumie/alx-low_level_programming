#include "lists.h"

/**
 * get_nodeint_at_index - gets the node at an index of listint_t
 * @head: points to the first node
 * @index: the index to be found
 * Return: the index node found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cur_idx = 0;
	listint_t *node = NULL;
	listint_t *current_node = NULL;

	if (!head)
	{
		return (NULL);
	}
	current_node = head;

	while (current_node)
	{
		if (cur_idx == index)
		{
			node = current_node;
			break;
		}
		else
		{
			current_node = current_node->next;
		}
		cur_idx++;
	}
	return (node);
}
