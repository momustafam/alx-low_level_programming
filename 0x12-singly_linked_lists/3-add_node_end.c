#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * Description: add_node_end - adds a new node at the end of given linked list
 * Input:
 *	@head: [pointer to list_t pointer] --> points the head pointer of a
 *	linked list
 *	@str: [pointer to string] --> points to the value of the string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return ('\0');

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	temp = *head;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new;

	return (new);
}
