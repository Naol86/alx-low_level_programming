#include "lists.h"

/**
 * last_node - get last node int
 * @head: head of linked list
 * Return: int
 */

int last_node(listint_t **head)
{
	int temp;

	if (*head == NULL)
		return (-1);

	if ((*head)->next == NULL)
	{
		temp = (*head)->n;
		free(*head);
		*head = NULL;
		return (temp);
	}

	return (last_node(&((*head)->next)));
}

/**
 * reverse_listint - reverse linked list
 * @head: head of the list
 * Return: listint_t*
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *new_head;
	int temp;

	new_head = NULL;

	while (*head != NULL)
	{
		temp = last_node(&(*head));
		add_nodeint_end(&new_head, temp);
	}

	return (new_head);
}
