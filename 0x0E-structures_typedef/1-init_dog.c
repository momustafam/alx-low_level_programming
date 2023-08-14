#include "dog.h"

/**
 * Description: init_dog - initialize a variable of type struct dog
 * Input:
 *	@d: [pointer to struct dog] --> object from the struct dog
 *	@name: [pointer to char] --> name of the dog
 *	@age: [float] --> age of the dog
 *	@owner: [pointer to char] --> the owner of the dog
 * Return: NULL
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
