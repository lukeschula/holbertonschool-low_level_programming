#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * Description:  print_all - function that prints anything
 *
 * @format: constant character being eecuted
 *
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	int n = 0;
	char *ptr;
	char *bvb = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[n])
		{
			switch (format[n])
			{
				case 'c':
					printf("%s%c", bvb, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", bvb, va_arg(list, int));
					break;
				case 'f':
					printf("%s%d", bvb, va_arg(list, int));
					break;
				case 's':
					ptr = va_arg(list, char *);
					if (!ptr)
						ptr = "(nil)";
					printf("%s%s", bvb, ptr);
					break;
				default:
					n++;
					continue;
			}
			bvb = ",";
			n++;
		}
	}
	printf("\n");
	va_end(list);
}


