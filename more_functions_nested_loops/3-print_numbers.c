#include "main.h"

/**
 * print_numbers - display all number from 0 to 9 followed by new line.
 *
 *Return: void
 */
void print_numbers(void)
{

	int x;

	for (x = 0; x <= 9; x++)
	{
	_putchar(x + '0');
	}
	_putchar('\n');
}
