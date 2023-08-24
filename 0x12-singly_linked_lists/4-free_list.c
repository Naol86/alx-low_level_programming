#include "lists.h"
/**
 * free_list - free memory
 * @head: linked list
 */

void free_list(list_t *head)
{
	list_t *current;

	current = head;

	if (current == NULL)
	{
		free(current);
		return;
	}
	free_list(current->next);
	free(current->str);
	free(current);
}
