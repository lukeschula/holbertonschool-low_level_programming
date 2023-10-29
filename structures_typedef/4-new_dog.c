#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of the string 
 * @t: pointer to the string being measured
 * Return: the length of the string
 */
int _strlen(char *n)
{
	int x = 0;

	while (n[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
 * _strcpy - copies the string from the two pointers in the function
 * @ptr: pointer that points to a pointer to the copy of a string
 * @rtp: pointer to the copy of the string
 * Return: the pointer to ptr
 */
char *_strcpy(char *ptr, char *rtp)
{
	int a = 0;
	int b;

	while (rtp[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b++)
	{
		ptr[b] = rtp[b];
	}
	ptr[b] = '\0';

	return (ptr);
}
/**
 * new_dog function to create a new dog structure
 * @name: pointer to name of dog
 * @age: age of the dog in float type
 * @owner: pointer to the owner of dog
 * Return: pointer to the new_dog, return NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int m = _strlen(name);
	int n = _strlen(owner);
	dog_t *woof;

	woof = malloc(sizeof(dog_t));

	if (woof == NULL)
	{ 
		return (NULL);
	}
	woof->name = malloc(sizeof(char) * (m + 1));

	if (woof->name == NULL)
	{
		free (woof);
		return (NULL);
	}
	woof->owner = malloc(sizeof(char) * (n + 1));
	
	if (woof->owner == NULL)
	{
		free(woof);
		free(woof->name);
		return (NULL);
	}	
	_strcpy(woof->name, name);
	_strcpy(woof->owner, owner);
	woof->age = age;

	return (woof);

}

