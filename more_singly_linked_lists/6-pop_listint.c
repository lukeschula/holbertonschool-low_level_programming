#include "lists.h"
/**
 *
 *
 *
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *another1;
	
	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;

	*another1 = *head;
	*head = (*head)->next;

	free(*another1);

	return (data);
}
