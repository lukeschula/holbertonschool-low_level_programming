#include "search_algos.h"
/**
 *
 *
 *
 */
void print_array(int *array, size_t l, size_t r)
{
	printf("Searching in array: ");

	for (; l <= r; l++)
	{
		printf("%d", array [l]);
		if (l != r)
			printf(", ");
	}
	printf("\n");
}
