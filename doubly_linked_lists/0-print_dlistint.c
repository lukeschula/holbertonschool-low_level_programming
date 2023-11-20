#include "lists.h"
/**
 *
 *
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	int n = 0 
	

	if (h == NULL)
	{
		return (NULL);
	}
	while (h != NULL)
	{
		printf("i\n", h-n);
		h = h->next;
		n++;

	}
	return (n);
}

