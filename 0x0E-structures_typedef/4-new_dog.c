#include "dog.h"
#include <stdlib.h>

/**
 * Description: new_dog - creates a new dog
 * Input:
 *	@name: [ponter to char] --> name of the dog
 *	@float: [float] --> the age of the dog
 *	@owner: [pointer to char] --> name of dog's owner
 * Return: NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return ('\0');
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
