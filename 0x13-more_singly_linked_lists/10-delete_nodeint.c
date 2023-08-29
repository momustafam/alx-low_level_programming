#include "lists.h"

int list_length(listint_t *);

/**
 * Description: delete_nodeint_at_index - deletes the node at index of
 * a listint_t linked list
 * Input:
 *	@head: (pointer to listint_t pointer): points to the head pointer of a
 *	linked list
 *	@index: (unsigned int): index of the node what you want to remove
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *temp2;
	unsigned int count  = 0;
	unsigned int list_len = list_length(temp);

	if (index >= list_len)
		return (-1);

	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		return (1);
	}

	while (temp)
	{
		if (count == index - 1)
		{
			temp2 = temp;
			temp = (temp->next)->next;
			free(temp2->next);
			temp2->next = temp;
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}



/**
 * Description: list_length - returns the length of the linked list
 * Input:
 *	@head: (pointer to listint_t list): points to the first node
 * Return: the lenght of the linked list
 */
int list_length(listint_t *head)
{
	unsigned int count = 0;

	while (head)
	{
		count++;
		head = head->next;
	}
	return (count);
}

