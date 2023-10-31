#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - structure classified as a dog
 * @name: pointer to name of dog
 * @owner: pointer to owner of dog
 * @age: pointer to age of dog
 *
 * Description: defines new type struct dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
	dog_t;

	void init_dog(struct dog *d, char *name, float age, char *owner);
	void print_dog(struct dog *d);
	dog_t *new_dog(char *name, float age, char *owner);
	void free_dog(dog_t *d);

#endif
