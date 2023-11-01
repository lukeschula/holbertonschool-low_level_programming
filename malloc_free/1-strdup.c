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
	int x;
	int y = 0;
	char *ptr

	if (str == NULL)
	{
		return (NULL);
	}

	x = 0;
	
	while (str[x] != '\0')
	{
		x++;
	}

	ptr = malloc(sizeof(char) * (x + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (y = 0; str[y]; y++)
	{
		ptr[y] = str[y]
	}
	return (ptr);
}
