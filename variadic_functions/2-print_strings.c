#include "variadic_functions.h"
/**
 * print_string - function that prints strings, followed by a new line
 *
 * @separator: pointer to the string to be printed between argument strings
 * @n: number of strings passed through the argument
 *
 * Return: printed string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ars;
	char *gg;
	unsigned int x;

	va_start(ars, n);

	for (x = 0; x < n; x++)
	{
		gg = va_arg(ars, char *);

		if (gg)
			printf("%s", gg);
		else 
			printf("(nil)");
		if (x < n - 1)
		{
			if (separator)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(ars);
}
