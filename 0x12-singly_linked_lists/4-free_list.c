#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * Description: free_list - frees a linked list
 * Input:
 *	@head: [pointer to list_t] --> points to the first node
 * Return: NULL
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;

	temp = head;

	while (head->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}

