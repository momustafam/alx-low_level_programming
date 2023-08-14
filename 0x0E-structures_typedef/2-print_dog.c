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
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
