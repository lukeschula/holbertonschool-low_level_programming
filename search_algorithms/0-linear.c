#include "search_algos.h"
/**
 *
 *
 *
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int y;

	if (!array)
		return (-1);

	for (y = 0; y < size; y++)
	{
		printf("Value checked array[%u] = [%i]\n", y, array[y]);
		if (array[y] == value)
		{
			return (y);
		}
	}
	return (-1);
}
