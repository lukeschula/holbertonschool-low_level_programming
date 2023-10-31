#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers, followed by a new line
 *
 * @separator: pointer to the string to be printed
 * @n: number of strings passed through the argument
 * 
 * Return: printed numbers, followed by a new line
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list rr;
	unsigned int a, b;
	unsigned int c = 0;

	if (!separator)

		c = 1;

	va_start(rr, n);
	for (a = 0; a < n; a++)
	{
		b = va_arg(rr, int);
		if (a != 0 && c == 0)
			printf("%s", separator);
		printf("%d", b);
	}
	printf("\n");
	va_end(rr);
}
	

