#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - function that searches for an integer
 * 
 * @array: pointer to array that is searched for an integer
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: the index of the first element for which the cmp function does not return 0,If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (a = 0; a < size; a++)
	
		if (cmp(array[a]))
		{
			return (a);
		}
	return (-1);
	
}	
