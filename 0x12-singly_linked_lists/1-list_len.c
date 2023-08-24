#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * Description: list_len - returns the number of elements in a linked list_t
 * Input:
 *	@h: [pointer to linked list] --> points to the first node
 * Return: number of nodes in the linked list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
