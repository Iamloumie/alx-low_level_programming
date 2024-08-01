#include "lists.h"

/**
 * add_node - creates a new node at the beginning
 * @head: the new node head
 * @str: the new node string
 * Return: the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	/* i: loop for new st... @length: counts the length of new string */
	unsigned int i, length = 0;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	new_node->len = length;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
