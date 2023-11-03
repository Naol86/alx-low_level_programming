#include "hash_tables.h"

/**
 * key_index - find index of key
 * @key: key of hash
 * @size: size of array
 * Return: unsigned long int
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index;

	index = hash_djb2(key) % size;

	return (index);
}
