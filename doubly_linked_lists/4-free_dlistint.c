#include "lists.h"
/**
 *
 *
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freed = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (freed != NULL)
	{
		freed = head->next;
		free(head)
		ead = freead;
	}
}

