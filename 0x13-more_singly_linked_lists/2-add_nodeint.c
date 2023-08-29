#include "lists.h"


/**
 * Description: add_nodeint - adds a new node at the beginning of a linked list
 * Input:
 *	@head: (pointer to listint_t pointer): a pointer that points to the
 *	head pointer of a linked lists
 *	@n: (const int): the value of n of the new node
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* create a new node */
	listint_t *new = malloc(sizeof(listint_t));
	/* if there is no memory for the new node return NULL */
	if (!new)
		return (NULL);
	/*
	 * make the next pointer of new node points to the first node
	 * of the linked lists and set the n to given n
	 */
	new->n = n;
	new->next = *head;
	/* make the head pointer points to the new node */
	*head = new;
	/* return the address of the new node */
	return (new);
}
