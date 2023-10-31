#include "main.h"
/**
 *  _strcat - function that concatenates two strings
 *  @dest: entered value
 *  @src: entered value
 *
 *  Return: void
 */
char *_strcat(char *dest, char *src)
{
        	int m = 0;
        	int n;


        	while (dest[m] != '\0')
        	{
                    	m++;
        	}
		n = 0;

        	while (src[n] != '\0')
        	{
                    	dest[m] = src[n];
                    	m++;
                    	n++;
        	}

        	dest[m] = '\0';

        	return (dest);
}

