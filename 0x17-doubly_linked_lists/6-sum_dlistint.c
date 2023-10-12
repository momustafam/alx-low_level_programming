#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data(n) of a doubly linked list
 *
 * Parameters:
 * -----------
 * @head: the head pointer of the doubly linked list
 *
 * Return:
 * -------
 *  - sum of all the data(n)
 *  - 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
