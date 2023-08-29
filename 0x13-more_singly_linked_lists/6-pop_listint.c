#include "lists.h"

/**
 * Description: pop-listint - deletes the head node of a listint_t
 * linked list and returns the head node's data (n).
 * Input:
 *	@head: (pointer to listint_t pointer): points to the head of listint_t
 * Return: value of first node's n in the linked list
 */
int pop_listint(listint_t **head)
{
	/* declare an int n variable and a listint_t temp pionter */
	int n;
	listint_t *temp;
	/* check if the head pointer points to head of a linked lists */
	if (!head || *head)
		return (0);
	temp = *head;
	/* get the value of first node's n and put it in n variable */
	n = temp->n;
	/* set the head pointer to NULL */
	temp = temp->next;
	free(*head);
	*head = temp;
	/* return the value of first node's n */
	return (n);
}
