#include "main.h"
/**
 * _strchr - Entry point
 * @s: pointer to input
 * @c: pointer to input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
        	int a = 0;
 
        	for (; s[a] >= '\0'; a++)
        	{
                    	if (s[a] == c)
                                	return (&s[a]);
        	}
        	return (0);
}
