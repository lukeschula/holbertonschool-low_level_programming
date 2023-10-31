#include "main.h"
#include <stdlib.h>

/*
 * _sqrt_recursion- calculates the natural sqrt of a #
 *
 * find_sq - recursive helper of _sqrt_recursion, adds second variable
 *
 * @n: number input
 * @request: input, potentially a canidate for sqrt n
 *
 *
 * Return: natural sqrt of a #
 */
int find_sq(int request, int n)
{
	if (request * request == n)
	{
		return (request);

	else if (request * request < n)
		
		return (find_sq(request + 1 , n));
	else 
		return (-1);
	}

int _sqrt_recursion(int n)
	
	if (n < 0)
	{
		return (-1);

	else if (n == 0)

		return (0);
	else if (n == 1) 
		return (1);
	
	else 
	
		return (find_sq(2, n));
	}
}
