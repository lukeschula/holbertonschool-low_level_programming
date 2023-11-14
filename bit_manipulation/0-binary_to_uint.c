#include "main.h"
/**
 *
 *
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int v = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != 0 && b[x] != 1)
			return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		v *= 2;
		if (b[x] == '1')
			v += 1;
	}
	return (v);
}
