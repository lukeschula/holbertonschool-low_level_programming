#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function that prints a name
 *
 * @name: pointer to array containing name
 * @f: pointer to the function that prints the name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}
	f(name);
}
