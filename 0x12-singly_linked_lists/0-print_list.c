#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * Description: print_list - prints all elements of nodes of a linked list
 * Input:
 *	@h: [pointer to node] --> head of the linked list
 * Return: number of nodes
 */
size_t print_list(list_t *h)
{
	size_t i = 0;
	list_t *temp = h;

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
