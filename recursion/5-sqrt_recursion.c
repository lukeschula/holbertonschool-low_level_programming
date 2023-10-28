#include "main.h"
int calculate_sqrt(int x, int y);
/*
 * _sqrt_recursion- calculates the natural sqrt of a #
 *
 * @n: number input
 *
 * Return: natural sqrt of a #
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	return (calculate_sqrt(n, 1));
	}

int calculate_sqrt(int x, int y)
{
	if (x <= y)
	{
		if (x * x == y)
			retrun (x);
		else 
			return (calculate_sqrt(x, y + 1));
	}
	else 
	
		return (-1);
	}
}
