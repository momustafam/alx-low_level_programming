#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 *
 * @key: the key
 * @size: ths size of the array of the hash table
 *
 * Return: the index of the requested key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);
	(void)size;

	return (index%1024);
}
