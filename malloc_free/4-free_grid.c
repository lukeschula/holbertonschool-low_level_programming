#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/** 
 * free grid: function from previous problem
 *
 * grid: 2 dimensional array to free 
 * height: input height 
 *
 * Return: grid that has been freed
 */
void free_grid(int **grid, int height)
{	
	int q;
	
	for (q = 0; q < height; q++)
	{
		free(grid[q]);
	}
	free(grid);
}	
