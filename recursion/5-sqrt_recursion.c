#include "main.h"
#include <stdlib.h>

/*
 * _sqrt_recursion- calculates the natural sqrt of a #
 *
 * sqrt_check - checks for the sqrt of t
 *
 * @n: number input
 * @request: input, potentially a canidate for sqrt n
 * @i: checks for sqrt
 * @c: number to find sqrt of
 *
 * Return: natural sqrt of a #
 */
int sqrt_check(int i, int t)
{
	if (i * i == t)
	{
		return (i);
	}
	if (i * i > t)
	{
		return (-1);
	}
	return (sqrt_check(i + 1, t));
}
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (sqrt_check(1, n));
}
