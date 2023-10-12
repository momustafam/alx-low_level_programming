#include "lists.h"
#include <stdio.h>

/**
 * Description: size_dlistint_len - returns number of elements of a dlistint_t
 *
 * Parameters:
 * -----------
 * @h: pointer points to the first node of the doubly linked list
 *
 * Return:
 * --------
 * the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
