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
	size_t num_of_el = 0;
	
	if (h == NULL)
	{
		return (0);
	}
	while  (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_of_el++;
	}
	return (num_of_el);
}
