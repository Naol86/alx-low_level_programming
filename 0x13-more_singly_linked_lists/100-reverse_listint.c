#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: head of the list
 * Return: listint_t*
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *top, *bottom;

	if (head == NULL || *head == NULL)
		return (NULL);

	bottom = NULL;

	while ((*head)->next != NULL)
	{
		top = (*head)->next;
		(*head)->next = bottom;
		bottom = *head;
		*head = top;
	}

	(*head)->next = bottom;

	return (*head);
}
