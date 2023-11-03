#include "hash_tables.h"

/**
 * hash_table_create - creating hash table
 * @size: size of the
 * Return: hash_table_t*
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	table->size = size;
	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t));

	return (table);
}
