#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * Parameters:
 * -----------
 *  @head: pointer points to the head of the linked list
 *  @n: the data value of the new node
 *
 * Return:
 * -------
 *  the address of the new node, NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *cur, *new;

	new = malloc(sizeof(dlistint_t));
	cur = *head;
	if (!new || !head)
		return (NULL);

	new->n = n;
	while (cur)
	{
		if (!(cur->next))
		{
			new->prev = cur;
			new->next = NULL;
			cur->next = new;
			break;
		}
		cur = cur->next;
	}
	if (!*head)
	{
		*head = new;
		new->prev = NULL;
		new->next = NULL;
	}
	return (new);
}
