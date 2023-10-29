#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - intializes srtuct dog
 *
 * @d: pointer to the struct 
 * @name: pointer to the name of the dog 
 * @age: input for the age of the dog, represented in a float type
 * @owner: pointer to the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
