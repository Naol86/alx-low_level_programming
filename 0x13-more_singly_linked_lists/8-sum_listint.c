#include "lists.h"

/**
 * sum_listint - sum of list
 * @head: head of list
 * Return: summation
 */

int sum_listint(listint_t *head)
{
	const listint_t *temp;
	int sum = 0;

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
