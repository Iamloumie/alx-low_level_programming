#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: head pointer
 * Return: the data of listint_t
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if (*head)
	{
		temp = *head;
		data = temp->n;

		*head = (*head)->next;

		free(temp);
	}

	return (data);
}
