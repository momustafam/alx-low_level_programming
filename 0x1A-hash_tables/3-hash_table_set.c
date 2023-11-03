#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_set - add an element to the hash table
 *
 * @ht: the hash table you want to add or update the key/value to
 * @key: key of the new element
 * @value: value of the new element
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp, *new_elem = malloc(sizeof(hash_node_t *));
	unsigned long int index;

	if (!ht || !key || !value)
		return (0);

	/* create a new element and assign its key/value */
	new_elem->key = malloc(sizeof(key));
	strcpy(new_elem->key, key);
	new_elem->value = malloc(sizeof(value));
	strcpy(new_elem->value, value);
	new_elem->next = NULL;

	/* location of the new element in the given hash table */
	index = hash_djb2((unsigned const char *) key) % ht->size;

	/* add the new element and handle the collision */
	if (!(ht->array[index]))
		ht->array[index] = new_elem;
	else
	{
		temp = ht->array[index];
		ht->array[index] = new_elem;
		new_elem->next = temp;
	}

	temp = ht->array[index];
	printf("key = %s - value = %s\n", temp->key, temp->value);
	return (1);
}
