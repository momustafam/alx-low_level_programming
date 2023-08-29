#include "lists.h"

/**
 * Description: get_nodeint_at_index - returns the nth node of a listint_t list
 * Input:
 *	@head: (pointer to listint_t list): pointer to head node
 *	@index: (unsigned int): index of the returned node
 * Return: address of the node, or NULL if it doesn't exit
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* set count variable */
	unsigned int count = 0;

	/* loop over the nodes */
	while (head)
	{
		/* if count == index then return count */
		if (count == index)
			return (head);
		/* increase count by one */
		count++;
		/* make head pointer points to the next node */
		head = head->next;
	}
	return (NULL);
}
