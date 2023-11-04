#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 *
 * @ht: the hash table what you want to print its elements
 *
 * Return: NULL
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head;
	unsigned long int i, last = 0;

	if (!ht || !(ht->array) || !(ht->size))
	{
		printf("{}\n");
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		if (head && last)
			printf(", ");
		while (head)
		{
			printf("'%s': '%s'", head->key, head->value);
			head = head->next;
			if (head)
				printf(", ");
			else
				last = 1;
		}
	}
	printf("}\n");

}
