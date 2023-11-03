#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: size of the table
 *
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (!hash_table)
		return (0);

	hash_table->array = malloc(size * sizeof(hash_node_t *));

	if (!(hash_table->array))
	{
		free(hash_table);
		return (0);
	}

	while (i < size)
	{
		hash_table->array[i] = NULL;
		i++;
	}

	hash_table->size = size;
	return (hash_table);
}
