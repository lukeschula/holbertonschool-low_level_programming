#include "function_pointers.h"
#include <stdlib.h>
/**
 * Description: array_iterator function given a parameter
 *
 * @array: pointer to the array about to be executed
 * @size: size of the array
 * @action: a pointer to the function you need to use
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
