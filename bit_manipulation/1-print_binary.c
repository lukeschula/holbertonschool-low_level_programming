#include "main.h"
/**
 *
 *
 *
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);

	}
	if ((n & 1) == 1)
	
		_putchar(49);
	
	else
	
		_putchar(48);
	
}
