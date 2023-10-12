#include "lists.h"


/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * Parameters:
 * -----------
 * @head: pointer points to the head of the linked list
 * @n: value of the new node
 *
 * Return:
 * -------
 * the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *cur;

	new = malloc(sizeof(dlistint_t));
	cur = *head;
	if (!head || !new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	if (!cur)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		cur->prev = new;
		new->next = cur;
		*head = new;
	}
	return (new);
}
