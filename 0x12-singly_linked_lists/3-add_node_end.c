#include "lists.h"

/**
 * str_len - length of string
 * @str: string
 * Return: unsigned int
 */
unsigned int str_len(char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * add_node_end - add node at the end
 * @head: head of the list
 * @str: string
 * Return: list_t*
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *temp;

	temp->str = strdup(str);
	temp->len = str_len(temp->str);
	temp->next = NULL;

	current = *head;

	while (current->next != NULL)
		current = current->next;

	current->next = temp;

	return (temp);
}
