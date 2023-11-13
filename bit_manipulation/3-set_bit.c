#include "main.h"
/**
 *
 *
 *
 *
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long) * 8)
