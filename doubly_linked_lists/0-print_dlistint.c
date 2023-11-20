#include "lists.h"
/**
 *
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

