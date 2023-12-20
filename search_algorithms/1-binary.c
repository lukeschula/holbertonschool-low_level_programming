#include "search_algos.h"
/**
 * print_array - prints the array to analyze
 * @array: array to be printed
 * @left: left part of the array
 * @right: right part of the array
 * Return - Nothing
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
 * binary_search - searches for a value in an array
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: number to search for
 * Return: where value is located
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
