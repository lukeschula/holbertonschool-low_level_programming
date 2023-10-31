#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: pointer toinput value
 * @src: pointer to input value
 * @n: pointer to input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
        	int k = 0;
 
        	while (k < n && src[k] != '\0')
        	{
                    	dest[k] = src[k];
                    	k++;
        	}
        	while (k < n)
        	{
                    	dest[k] = '\0';
                    	k++;
        	}
 
        	return (dest);
}
