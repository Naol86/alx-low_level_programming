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
	char *str;
	unsigned int count = 0;

	current = h;

	while (current != NULL)
	{
		str = current->str == NULL ? "[0] (nil)" : current->str;
		printf("[%u] %s\n", current->len, str);
		current = current->next;
		count++;
	}

	return (count);
}
