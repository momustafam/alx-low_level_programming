#include "lists.h"

/**
 * Description: insert_nodeint_at_index - inserts a new node at
 * a given postition
 * Input:
 *	@head: (pointer to listint_t pointer): points to the head pointer
 *	@idx: (unsigned int): index of the new node
 *	@n: (int): value of new node's n
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	unsigned int count = 0;
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!temp && idx == 0)
	{
		*head = new;
		return (new);
	}
	else if (!temp && idx != 0)
		return (NULL);
	else if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (temp)
	{
		if (count == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
		count++;
	}
	if (count == idx - 1 && !temp)
	{
		temp->next = new;
		return (new);
	}
	return (NULL);
}
