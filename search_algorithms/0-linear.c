#include "search_algos.h"
/**
 *
 *
 *
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (!array)
		return (-1);
	for (; x < size; x++)
	{
		printf("Value hecked array[%lu] = [%i]\n", x, array[x]);
		if (array[x] == value)
			return (i);
	}
	return (-1);
}
