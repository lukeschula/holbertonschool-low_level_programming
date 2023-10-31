#include "main.h"
/**
 * _strncat - function concatenate two strings
 * using at most n bytes from src
 * @dest: entered value
 * @src: entered value
 * @n: entered value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
        	int x = 0;
        	int y = 0; 


        	while (dest[x] != '\0')
        	{
                    	x++;
        	}

		while (y < n && src[y] != '\0')
        	{
        	dest[x] = src[y];
        	x++;
        	y++;
        	}
        	dest[x] = '\0';

        	return (dest);
}
