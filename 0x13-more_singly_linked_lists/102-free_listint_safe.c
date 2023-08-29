#include "lists.h"
/**
 * count_unique - count unique node
 * @head: head of linked list
 * Return: int
 */

size_t count_unique(listint_t *head)
{
	listint_t *top, *bottom;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	top = head->next;
	bottom = (head->next)->next;
	while (bottom)
	{
		if (top == bottom)
		{
			top = head;
			while (top != bottom)
			{
				node++;
				top = top->next;
				bottom = bottom->next;
			}

			top = top->next;
			while (top != bottom)
			{
				node++;
				top = top->next;
			}

			return (node);
		}
		top = top->next;
		bottom = (bottom->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - free list safely
 * @h: head to list
 * Return: int
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t node, idx;

	node = count_unique(*h);

	if (node == 0)
	{
		for (; h != NULL && *h != NULL; node++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}

	else
	{
		for (idx = 0; idx < node; idx++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		*h = NULL;
	}
	h = NULL;
	return (node);
}
