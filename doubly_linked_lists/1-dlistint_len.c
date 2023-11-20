#include "lists.h"
/**
 *
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t nd;

	for (nd = 0; temp; nd++)
	{
		temp = temp->next;
	}
	return (nd);
}

