#include "lists.h"
/**
 * print_dlistint - functions
 * @h: head of doubly linked list
 * Return: the number of nodes
 *
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nd = 0;


	if (h == NULL)
	{
		return (nd);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nd++;

	}
	return (nd);
}

