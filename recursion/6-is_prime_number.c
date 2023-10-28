#include "main.h"
/*
 * check_num- function to help check if the integer input is a prime number
 *
 * @o: integer input to check a prime number
 * @p: integer input for divisor 
 *
 * Return: 1 if the input is a prime number, otherwise 0 if not prime 
 */
int check_num(int o, int p)
{
	int x, y;

	x = o / p;
	y = o % p;

	--p;

	if (y == 0 && p < o && x != o)
	{
		return (0);
	}
	else if (y == 0 && p == 1 && x == o)
	{
		return (1);
	}
	return (check_num(o, p));
}

/*
 * is_prime_number- return 1 if the input number is a prime number, otherwise return 0
 *
 * @n: number input
 *
 * Return: 1 if the input number is a prime number, otherwise print 0
 */
int is_prime_number(int n)
{
	if ( n <= 1)
	{
		return (0);
	}
	return (check_num(n, n));
}
