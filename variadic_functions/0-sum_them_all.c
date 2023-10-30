#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 *
 * @n: int input passed through the argument, purpose to calculate sum
 *
 * Return: sum of all the parameter from the integer input
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sumof;
	unsigned int x;
	int fsum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(sumof, x);

	for (x = 0; x < n; x++)
	{
		fsum += va_arg(sumof, int);
	}
	va_end (sumof);
	return (fsum);
}
