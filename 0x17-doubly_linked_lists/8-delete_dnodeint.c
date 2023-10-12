#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t
 *
 * Paramters:
 * ----------
 * @head: head pointer of the doubly linked list
 * @index: index of the node that you want to delete
 *
 * Return:
 * -------
 *  - 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur = *head;
	unsigned int i = 0;

	if (!cur || !head)
		return (-1);

	if (index == 0)
	{
		*head = cur->next;
		free(cur);
		return (1);
	}

	while (cur)
	{
		if (i == index)
		{
			cur->prev->next = cur->next;
			free(cur);
			return (1);
		}
		i++;
		cur = cur->next;
	}
	return (-1);
}
