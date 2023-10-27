#include "main.h"
/*
 * _strlen_recursion - Returns the length of a string
 * @s: pointer to the string to be measured
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)

		return (_strlen_recursion(s + 1) + 1);

	return (0);
}
