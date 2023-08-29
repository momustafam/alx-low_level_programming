#include "lists.h"

/**
 * Decription: sum_listint - returns the sum of all the data(n) of
 * listint_t linked lists
 * Input:
 *	@head: (pointer to listint_t list): points to the head's node
 * Return: sum of all the data(n) of given linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
