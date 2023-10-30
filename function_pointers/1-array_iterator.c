#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function given as a parameter on each element of an array
 *
 * @array: pointer to the array about to be executed
 * @size: size of the array
 * @pointer to the funtion
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}
	while (size--> 0)
	{
		action(*array);
		array++;
	}
}
