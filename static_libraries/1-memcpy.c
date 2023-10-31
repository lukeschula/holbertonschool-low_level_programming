#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: pointer to memory where is stored
 *@src: pointer to memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        	int g = 0;
        	int h = n;
 
        	for (; g < h; g++)
        	{
                    	dest[g] = src[g];
                    	n--;
        	}
        	return (dest);
}
