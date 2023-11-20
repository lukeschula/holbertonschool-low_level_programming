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
		return (NULL);
	}
	while (h != NULL)
	{
		printf("i\n", h->n);
		h = h->next;
		nd++;

	}
	return (nd);
}

