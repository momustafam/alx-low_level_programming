#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t (doubly linked list)
 *
 * Parameters:
 * -----------
 * @head: a pointer points to the first node of the linked list
 *
 * Return: NULL
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	if (!head)
		return;
	while (temp)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
