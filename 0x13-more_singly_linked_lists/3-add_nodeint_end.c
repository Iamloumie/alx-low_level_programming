#include "lists.h"

/**
 * add_nodeint_end - add new node at the end of listint_t
 * @head: the head of the new node
 * @n: incoming integer in the new node
 * Return: the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	tmp = *head;

	/*base checks*/
	if (tmp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while(tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
	}
	return (*head);
}
