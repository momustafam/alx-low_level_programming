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
		printf("Name: %s", d->name);
		printf("Age: %.6f", d->age);
		printf("Owner: %s", d->owner);
	}
	else
	{
		printf("Name: (nail)");
		printf("Age: (nail)");
		printf("Owner: (nail)");
	}
}
