#include "lists.h"
#include <stdio.h>
/**
 * print_list - print list element in singly linked list
 * @h: linked list
 * Return: size_t size of list
 */
size_t print_list(const list_t *h)
{
	const list_t *current;
	unsigned int count = 0;
	current = h;

	if (current == NULL)
	{
		printf("[0] (nil)");
	}
	while (current != NULL)
	{
		printf("[%u] %s\n", current->len, current->str);
		current = current->next;
		count++;
	}

	return (count);
}
