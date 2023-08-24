#ifndef LISTS
#define LISTS

/*
* Desc: header file containinf prototypes and definitions
*	for all functions and types written in this proj
*/
#include <stddef.h>
#include <stdlib.h>

/**
 * Description: list_t - single linked list
 * @str: [pointer to string] --> a string
 * @len: [unsigned int] -> number of characters in str
 * @next: [pointer to list_t] --> points to next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
