#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * malloc_checked - returns a pointer to the  allocates memory
 *
 * b: unassigned integer
 *
 * Return: pointer to alloacted memory
 *
 * Description: malloc_checked function should cause normal process termination
 * with a status value of 98. return pointer
 *
 */
void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);

	if (t == NULL)
	{
		exit(98);
	}
	return (t);
}
