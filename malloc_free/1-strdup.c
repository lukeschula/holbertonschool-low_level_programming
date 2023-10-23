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
		i = 0;
	}

	while  (str[i] != '\0')
	{
		i++;
	}

	ary = malloc(sizeof(char) * i + 1);

	if (ary == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j]; j++)
	{
		ary[j] = str[j];
	}
	return (ary);
}	
