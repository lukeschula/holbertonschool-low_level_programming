#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat: concatenates two strings
 *
 * s1: first string
 * s2: string to add at the end of first string
 *
 * Return: pointer to newly allocated string concatenation 
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
	for (x = 0; s1[x] || s2[x] x++;)
	{	
		z++;
	}

	r2 = malloc(sizeof(char) * z);

	if (r2 = NULL)
	{
		return (NULL);
	}
	for (x = 0; s2[x]; x++)
	{
		r2[y++] = s2[x];
	}
	for (x = 0; s1[x]; x++)
	{
		r1[y++ = s1[x];
	}
	return (r2);
}

	
