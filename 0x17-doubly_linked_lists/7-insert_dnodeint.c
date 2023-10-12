#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * Parameters:
 * -----------
 * @h: head pointer of the doubly linked list
 * @idx: index of the new node
 * @n: data value of the new node
 *
 * Return:
 * -------
 *  - the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev, *cur, *new;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new || !h)
		return (NULL);

	prev = NULL;
	cur = *h;
	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = cur;
		*h = new;
		return (new);
	}

	while (cur || i == idx)
	{
		if (i == idx)
		{
			prev->next = new;
			if (cur)
				cur->prev = new;
			new->next = cur;
			new->prev = prev;
			return (new);
		}
		prev = cur;
		cur = cur->next;
		i++;
	}
	free(new);
	return (NULL);
}
