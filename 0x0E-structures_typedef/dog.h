#ifndef DOG
#define DOG

/**
 * Description: struct dog - dog's basic info
 * Attributes:
 * @name: [pointer to char] --> name of the dog
 * @age: [float] --> age of the dog
 * @owner: [pointer to char] --> name of the dog's owner
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *nmae, float age, char *owner);

#endif
