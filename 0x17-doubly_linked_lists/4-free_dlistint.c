#include "lists.h"

/**
 * free_dlistint - free lists
 * @head: head of list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *check;

	current = head;
	while (current != NULL)
	{
		check = current->next;
		free(current);
		current = check;
	}
}
