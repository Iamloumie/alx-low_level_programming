#include "lists.h"

/**
 * free_list- free the list_t
 * @head: the list_t head
 */

void free_list(list_t *head)
{
	list_t *new_mode;
	list_t *next;

	new_mode = head;
	while (new_mode != NULL)
	{
		next = new_mode->next;
		free(new_mode->str);
		free(new_mode);
		new_mode = next;
	}
}
