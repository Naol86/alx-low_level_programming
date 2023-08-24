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
 * add_node - add node at the beginning
 * @head: head of the node
 * @str: string
 * Return: list_t*
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (str == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);

	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->len = str_len(temp->str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
