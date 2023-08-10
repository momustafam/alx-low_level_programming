#include "main.h"
#include <stdlib.h>

/**
 * Description: _realloc - reallocates a memory block using malloc and free
 * Input:
 *	@ptr: [void pointer] --> points to the memory previously allocated
 *	with a call to malloc
 *	@old_size: [unsigned int] --> the size of the allocated space for ptr
 *	@new_size: [unsigned int] --> the new size of the new memory block
 * Return: If success - pointer to the newly allocated memory otherwise NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	__attribute__((unused)) unsigned int i;

	if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
		return (malloc(new_size));
	else if (new_size == 0)
	{
		free(ptr);
		return ('\0');
	}

	p = malloc(new_size);

	/* for (i = 0; i < old_size; i++)
		p[i] = ptr[i];
	*/
	free(ptr);
	return (p);
}
