#include "lists.h"

/**
 * sum_dlistint - sum the total no of data(n) in a d_list
 *
 * @head: the pointer to the head of the list
 *
 * Return: total no of data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
