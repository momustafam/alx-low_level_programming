#include "main.h"
#include <stdlib.h>

/**
 * Description: _calloc - allocates memory for an array, using malloc
 * Input:
 *	@nmemb: [unsigned int] --> number of elements
 *	@size: [unsigned int] --> size of each element
 * Return: if success pointer to the allocated array otherwise NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return ('\0');

	p = malloc(nmemb * size);

	if (p == NULL)
		return ('\0');

	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (p);
}
