#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
        	unsigned int v = 0;
        	int o;
 
        	while (*s)
        	{
                    	for (o = 0; accept[o]; o++)
                    	{
                                	if (*s == accept[o])
                                	{
                                            	v++;
                                            	break;
                                	}
                                	else if (accept[o + 1] == '\0')
                                            	return (v);
                    	}
                    	s++;
        	}
        	return (v);
}
