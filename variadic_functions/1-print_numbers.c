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
	va_list man;
	char *ci;
	unsigned int in;

	va_start(man, n);



	for (in = 0; in < n; in++)
	{
		ci = va_arg(man, char *);

		if (ci == NULL)
			printf("(nil)");

		else 
			printf("%s", ci);

		if (in != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(man);
}
