#include "dog.h"
#include <stdlib.h>

/**
 * Description: free_dog - frees dogs structs
 * Input:
 *	@d: [pointer to dog struct] --> points to a dog struct
 * Return: NULL
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d->age);
	}
}
