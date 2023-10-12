#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 *
 * Parameters:
 * -----------
 * @head: pointer points to the first node of a doubly linked list
 * @index: index of the requested node for returninig
 *
 * Return:
 * -------
 * - data of the requested node
 * - NULL if the node doesn't exit
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cur = head;
	unsigned int i = 0;

	if (!cur)
		return (NULL);
	while (cur)
	{
		if (i == index)
			return (cur);
		i++;
		cur = cur->next;
	}
	return (NULL);
}
