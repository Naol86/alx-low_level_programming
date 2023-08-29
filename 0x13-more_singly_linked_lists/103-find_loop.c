#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of the list
 * Return: linked list
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *top, *bottom;

	if (head == NULL || head->next == NULL)
		return (NULL);

	top = head->next;
	bottom = (head->next)->next;

	while (bottom)
	{
		if (top == bottom)
		{
			top = head;
			while (top != bottom)
			{
				top = top->next;
				bottom = bottom->next;
			}
			return (top);
		}
		top = top->next;
		bottom = (bottom->next)->next;
	}
	return (NULL);
}
