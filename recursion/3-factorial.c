#include "main.h"
/*
 * int factorial - computes the factorial of number given
 * @n: number input 
 *
 * Return: the factorial of the number given
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return(1);
	}
	return (n * factorial(n-1));
}
