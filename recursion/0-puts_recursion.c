#include "main.h"
/**
 * _puts-recursion- function similar to puts();
 * @s: input
 * Return Always 0 (Success)
 */
void _puts_recursion(char *s);
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursions(s + 1);
	}

	else
		_putchar('\n');
}
