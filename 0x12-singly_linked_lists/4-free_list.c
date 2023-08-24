#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * Description: free_list - frees a linked list
 * Input:
 *	@head: [pointer to list_t] --> points to the first node
 * Return: NULL
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}

