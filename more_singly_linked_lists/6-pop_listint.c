#include "lists.h"
/**
 *
 *
 *
 */
int pop_listint(listint_t **head)
{
	int d;
	listint_t *ptr;
	
	if (*head == NULL)
	{
		return (0);
	}

		ptr = *head;
		d = ptr->n;
		*head = ptr->next;
		free(ptr);
		return (d);
	
}
