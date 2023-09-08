#include "hash_tables.h"

/**
 * key_index - Given the index of a key.
 * @key: const unsigned char
 * @size: The size of the array
 *
 * Return: the index of a key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i = hash_djb2(key) % size;

	return (i);
}
