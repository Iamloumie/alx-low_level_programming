#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of a list
 *
 * @head: double pointer to the head of the list
 * @n: the data of the new list to be inserted
 *
 * Return: pointer to the new list created
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	temp = (*head);

	if (temp != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	else
		*head = new;
	new->prev = temp;

	return (new);
}
