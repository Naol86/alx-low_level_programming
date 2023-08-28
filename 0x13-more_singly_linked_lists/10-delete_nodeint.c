#include "lists.h"

/**
 * delete_nodeint_at_index - delete node form list
 * @head: head of list
 * @index: index
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int count = 0;

	current = *head;
	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	while (current)
	{
		if (count + 1 == index)
		{
			temp = current->next;
			current->next = temp->next;
			free(temp);
			return (1);
		}
		count++;
		current = current->next;
	}

	return (-1);
}
