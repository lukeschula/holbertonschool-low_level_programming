#include "main.h"
#include <stdlib.h>
/**
 * *create_array - program startup
 * @size: int being evaluated
 * @c: char being evaluated
(*
 * Description: creates an array of chars
 * and initializes it with a specific char)?
 * Return: return (0) is the required function signature
 */

char *create_array(unsigned int size, char c)
{	
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) *size);

	if (array == NULL)
	{
		return(NULL);
	}
	for (i = 0; i < size; i++)
	{	
		array[i] = c;

	} return (array);
}
