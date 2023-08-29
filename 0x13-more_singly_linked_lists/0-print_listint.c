#include "lists.h"

/**
 * Description: print_listint - prints all the elements of a listint_t list
 * Input:
 *	@h: (const pointer to listint_t): a head pointer of a linked lists
 * Return: number of elements in the linked lists
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	/* loop over the nodes of the linked lists and */
	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
