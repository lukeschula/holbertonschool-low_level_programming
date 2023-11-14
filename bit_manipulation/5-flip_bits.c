#include "main.h"
/**
 *
 *
 *
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x = 0;
	unsigned int tmp;

	tmp = n ^ m;

	while (tmp)
 	{
		if ((tmp & 1) == 1)
			x++;

		tmp >>= 1;
	}
	return (x);

}
