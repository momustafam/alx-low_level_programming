#include "dog.h"
#include <stdlib.h>

/**
 * Description: new_dog - creates a new dog
 * Input:
 *	@name: [ponter to char] --> name of the dog
 *	@age: [float] --> the age of the dog
 *	@owner: [pointer to char] --> name of dog's owner
 * Return: NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned long int i;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return ('\0');

	dog->name = malloc(sizeof(name) + 1);
	if (dog->name == NULL)
		free(dog->name);
	else
	{
		for (i = 0; i <= sizeof(name); i++)
		{
			dog->name[i] = name[i];
		}
		dog->name[i] = '\0';
	}

	dog->age = age;

	dog->owner = malloc(sizeof(owner) + 1);
	if (dog->owner == NULL)
		free(dog->owner)
	else
	{
		for (i = 0; i < sizeof(owner); i++)
		{
			dog->owner[i] = owner[i];
		}
	}
	dog->owner[i] = '\0';

	return (dog);
}
