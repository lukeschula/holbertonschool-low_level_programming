#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of integers
 * 
 * @array: array of integers
 * @size: size of the array
 * @value: value to look for index
 *
 * Return: index of value on success, -1 on failure
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
