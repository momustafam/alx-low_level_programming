#include "lists.h"

/**
 * Descritpion: free_listint2 - frees a listint_t list
 * Input:
 *	@head: (pointer to listint_t pointer): points to the head of the list
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	/* check if the list is empty exit the program */
	if (!head)
		return;

	temp = *head;
	
	if (!temp)
		return;
	/* loop over the linked list nodes */
	/*
	 * if the ith node is the last node break the loop
	 * else
	 *	set the head pointer to next node and remove the current
	 *	node using temp pointer
	 */
	while (temp->next)
	{
		*head = temp->next;
		free(temp);
		temp = *head;
	}
	/* remove the last node using head */
	free(temp);

	/* set the head pointer to NULL */
	*head = NULL;
}
