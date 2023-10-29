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
