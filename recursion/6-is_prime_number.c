#include "main.h"
int prime_checker(int n, int o);
/*
 * check_num- function to help check if the integer input is a prime number
 *
 * @o: integer input to check a prime number
 * @p: integer input for divisor
 *
 * Return: 1 if the input is a prime number, otherwise 0 if not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (prime_checker(n, n / 2) > 0)
	{
		return (1);
	}
	return (0);
}

int prime_checker(int n, int o)
{
	if (o == 1)
	{
		return (1);
	}
	if (n % o == 0)
	{
		return (0);
	}
	else
	{
		return (prime_checker(n, o - 1));
	}
}

