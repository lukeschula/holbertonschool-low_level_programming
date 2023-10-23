#include <stdio.h>
#include <stdlib.h> 
#include "main.h"
/**
 * _strdup: duplicates a string into newly allocated space in memory
 * 
 * str: string to duplicate
 *
 * Return: pointer to a new string
 */
char *_strdup(char *str)
{	
	char *ary;
	int i, j;

	if (str == NULL)
	{	
		return(NULL);
		j = 0;
	}

	for (i = 0; str[i] != '\0'; i++);
	{
		j++;
	}

	ary = malloc(sizeof(char) * j + 1);

	if (ary == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		ary[i] = str[i];
	}
	return (ary);
}	
