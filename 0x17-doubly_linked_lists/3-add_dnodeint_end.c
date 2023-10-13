#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of list
 * @head: head of the list
 * @n: int
 * Return: dlistint_t*
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	current = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = *head;
		*head = new_node;
		return (new_node);
	}

	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
