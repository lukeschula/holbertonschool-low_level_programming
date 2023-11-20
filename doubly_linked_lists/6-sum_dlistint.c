#include "lists.h"
/**
 *
 *
 *
 */
int sum_dlistint(dlistint_t *head)
{	
	int s;
	int x;

	for (x = 0; head;x++)
	{
		s += head->n;
	       head += head->next;
	}
	return (s);
}	
