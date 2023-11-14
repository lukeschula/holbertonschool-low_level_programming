#include "lists.h"
/**
 *
 *
 *
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *ptr;
	
	if (head == NULL)
	{
		return (0);
	}
	if (*head)
	{
		ptr = *head
		*head = (*head)->next;
		data = ptr->n;
		free(ptr);
	
	return (data);
}
