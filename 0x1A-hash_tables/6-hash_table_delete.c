#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 *
 * @ht: the hash table what you want to delete
 *
 * Return: NULL
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *head;
	unsigned long i = 0;

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		ht->array[i] = NULL;

		while (head)
		{
			temp = head;
			head = head->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
