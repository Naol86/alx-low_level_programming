#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node
 * @head: head of list
 * @idx: index
 * @n: int
 * Return: listint_t*
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	current = *head;

	if (idx == 0)
	{
		new_node->next = current;
		*head = new_node;
		return (new_node);
	}
	while (current)
	{
		if (count + 1 == idx)
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		count++;
		current = current->next;
	}

	return (NULL);
}
