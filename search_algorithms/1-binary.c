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
		printf("%d", array[l]);
		if (l != r)
			printf(", ");
	}
	printf("\n");
}
/**
 *
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l2, r2, mid;

	if (array == NULL)
		return (-1);

	l2 = 0;
	r2 = size - 1;
	mid = 0;

	while (l2 <= r2)
	{
		print_array(array, l2, r2);
		mid = (l2 + r2) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			l2 = mid + 1;
		else
			r2 = mid - 1;
	}
	return (-1);
}
