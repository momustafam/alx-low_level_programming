#include "lists.h"

/**
 * Description: listint_len - returns the number of elements in a linked lists
 * Input:
 *	@h: (const pointer to listint_t): the head pointer of the linked lists
 * Return: number of nodes in the linked lists
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
