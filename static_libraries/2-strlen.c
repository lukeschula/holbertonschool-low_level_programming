#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 * Return: length
 */
int _strlen(char *s)
{
        	int e = 0;
 
        	while (*s != '\0')
        	{
                    	e++;
                    	s++;
        	}
 
        	return (e);
}
