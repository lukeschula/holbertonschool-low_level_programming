#include "main.h"
/**
 * print_most_numbers - print all number from 0 to 9 expext 2 and 4.
 *
 * Return:void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar (j % 10 + '0');
		}
		_putchar('\n');
	}	
}	
