#include "lists.h"
/**
 *
 *
 *
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *another1
	
	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
