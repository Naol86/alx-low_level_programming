#include "hash_tables.h"

/**
 * hash_table_create - creating hash table
 * @size: size of the the array
 * Return: hash_table_t*
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		return (NULL);
	}

	return (table);
}
