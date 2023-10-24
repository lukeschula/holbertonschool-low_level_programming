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
	int **d
	int a, f, c;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	
	d = malloc(height * sizeof(int);

	if (a == NULL) 
	
		return (NULL);

	for c = 0; c < height; c++)
	{	
		d[c] = malloc(width *sizeof(int));

		if (d[c] == NULL)
		{
			for (f = 0; f <= c; j++)
				free(a[c]);
			free(a);
			return (NULL);
		}
}

