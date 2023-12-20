#include "search_algos.h"
/**
 *
 *
 *
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x = 0;

	if (!array)
		return (-1);
	for (; x < size; x++)
	{
		printf("Value hecked array[%ld] = [%d]\n",  x,  array[x]);
		if (array[x] == value)
			break;
	}
	if (x == size)
		return(-1);
	
	return (x);
}
