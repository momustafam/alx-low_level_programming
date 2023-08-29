#include "lists.h"

/**
 * Descritpion: free_listint - frees a listint_t list
 * Input:
 *	@head: (pointer to listint_t list): the head pointer of the linked list
 * Return: NULL
 */
void free_listint(listint_t *head)
{
	/* set temp pointer which points to a node */
	listint_t *temp = head;
	/* check if the list is empty exit the program */
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
		head = temp->next;
		free(temp);
		temp = head;
	}
	/* remove the last node using head */
	free(temp);
}
