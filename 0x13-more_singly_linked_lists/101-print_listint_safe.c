#include "lists.h"

/**
 * len_of_list - length of list
 * @head: head of list
 * Return: len of list int
 */

size_t len_of_list(const listint_t *head)
{

	const listint_t *top, *bottom;
	size_t nodes = 1;

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
				nodes++;
				top = top->next;
				bottom = bottom->next;
			}

			top = top->next;
			while (top != bottom)
			{
				nodes++;
				top = top->next;
			}

			return (nodes);
		}

		top = top->next;
		bottom = (bottom->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = len_of_list(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
