#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * Description: add_node - adds a new node at the beginning of a linked list
 * Input:
 *	@head: [pointer to list_t pointer] --> points to the head pointer of
 *	the linked list
 *	@str: [pointer to string] --> value of the new string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return ('\0');

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
