#include "lists.h"

/**
 * sum_listint - prints the sum of every node's value
 * @head: the head of the linked list
 * Return: returns the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
