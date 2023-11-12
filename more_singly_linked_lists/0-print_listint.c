#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a listint_t list.
 *
 * @h: pointer to the head pointer
 *
 * Return: the # of elements in listint_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t num_of_el = 1;

	if (h)
	{
		printf("i%/n", h->n);
	}
	if (h->next)
	{
		num_of_el += print_listint(h->next);

		return (num_of_el);
	}
}
