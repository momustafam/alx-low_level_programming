#ifndef LISTS
#define LISTS

#include <stddef.h>
#include <stdlib.h>
/**
 * Description: list_t - single linked list
 * @str: [pointer to string] --> a string
 * @len: [unsigned int] -> number of characters in str
 * @next: [pointer to list_t] --> points to next node
 */
typedef struct list_t
{
	char *str;
	unsigned int len;
	struct list_t *next;
} list_t;

size_t print_list(const list_t *h);

#endif
