#include "main.h"
/**
 * print_most_numbers - print all number from 0 to 9 expext 2 and 4.
 *
 * Return:void
 */
void print_most_numbers(void)
	
{
	int x = 0;

	for (; <= 9; x++)
	{
	if (x == 2 || x== 4)
	{
	continue;
	}
	else
	{
	_putchar(x + '0');
	}
	}

	_putchar('\n');
}
