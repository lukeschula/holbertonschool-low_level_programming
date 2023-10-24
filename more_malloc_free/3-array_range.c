#include "main.h"

#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: int for minimum number
 * @max: int for maximum number
 * Return: pointer to the array, NULL if min < max or if function fails
 */
int *array_range(int min, int max)
{
	int x, *y;

	if (min > max)
	{
		return (NULL);
	}
	y = malloc(sizeof(int) * (max - min + 1));

	if (y == NULL)
	{
		return (NULL);
	}
	for (x = 0; x <= max - min; x++)
	{
		y[x] = min + x;
	}
	return (y);
}
