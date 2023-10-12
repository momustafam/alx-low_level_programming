#include "lists.h"
#include <stdio.h>

/**
 * Description: dlistint_len - returns number of elements of a dlistint_t list
 *
 * Parameters:
 * -----------
 * @h: pointer points to the first node of the doubly linked list
 *
 * Return:
 * --------
 * the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
