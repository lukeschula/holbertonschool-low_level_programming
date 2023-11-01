#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid: nested loop for grid
 *
 * width: width input
 * height: height input
 *
 * Return: 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **d;
	int a, f;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	d = malloc(height * sizeof(int *));

	if (d == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		d[a] = malloc(width * sizeof(int));

		if (d[a] == NULL)
		{
			while (a >= 0)
			{
				free(d[a--]);
			free(d);
			return (NULL);
			}
		}

		for (f = 0; f < width; f++)
		{
			d[a][f] = 0;
		}
	}
	return (d);
}
