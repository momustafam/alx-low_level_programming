#include "dog.h"
#include <stdio.h>

/**
 * Description: print_dog - print the dog's info
 * Input:
 *	@d: [pointer to struct dog] --> the container of dog's info
 * Return: NULL
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %.6f", d->age);
		printf("Owner: %s", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
