#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 *
 * @format: constant character being eecuted
 * 
 * Return: 0
 */
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);
{
	va_list print;
	int a = 0;
	int b = 0;
	char *ptr = "";

	va_start(all, format);

	while (format && (*(format + 
