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
	dlistint_t *cur, *new;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new || !h)
		return (NULL);

	cur = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));

	idx--;
	while (cur || i == idx)
	{
		if (i == idx)
		{
			new->n = n;
			new->next = cur->next;
			cur->next = new;
			new->prev = cur;
			if (new->next)
				new->next->prev = new;
			return (new);
		}
		cur = cur->next;
		i++;
	}
	free(new);
	return (NULL);
}
