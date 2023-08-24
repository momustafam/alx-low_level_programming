#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * Description: print_list - prints all elements of nodes of a linked list
 * Input:
 *	@h: [pointer to node] --> head of the linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (1)
	{
		if (h == NULL)
			break;

		i++;

		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}

	return (i);
}
