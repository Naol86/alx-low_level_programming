#include "lists.h"
/**
 * print_list - print list element in singly linked list
 * @h: linked list
 * Return: size_t size of list
 */
size_t print_list(const list_t *h)
{
	list_t *current = h;
	unsigned int count = 0;

	if (count == NULL)
	{
		printf("[0] (nil)");
	}
	while (current != NULL)
	{
		printf("[%ul] %s\n", current->len, current->str);
		current = current->next;
		count++;
	}

	return (count);
}
