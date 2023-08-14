#ifndef DOG
#define DOG

/**
 * Description: struct dog - dog's basic info
 * Attributes:
 * @name: [pointer to char] --> name of the dog
 * @age: [float] --> age of the dog
 * @owner: [pointer to char] --> name of the dog's owner
 */


typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
