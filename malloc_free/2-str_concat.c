#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: Char pointer for string 1
 * @s2: Char pointer for string 2
 * Return: Char pointer of concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *r2;
	int x, y = 0, z = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (x = 0; s1[x] || s2[x]; x++)
	{
		z++;
	}

	r2 = malloc(sizeof(char) * z);

	if (r2 == NULL)
	{
		return (NULL);
	}
	for (x = 0; s1[x]; x++)
	{
		r2[y++] = s1[x];
	}
	for (x = 0; s2[x]; x++)
	{
		r2[y++] = s2[x];
	}
	return (r2);
}


