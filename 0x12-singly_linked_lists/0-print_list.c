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
	int i = 1;
	list_t *temp;

	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);

	temp = h->next;

	while (1)
	{
		if (temp == NULL)
			break;

		i++;

		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);

		temp = temp->next;
	}

	return (i);
}
