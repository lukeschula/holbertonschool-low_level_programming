#include "lists.h"
/**
 *
 *
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *present = NULL;
	dlistint_t *future = NULL;

	future = malloc(sizeof(dlistint_t));

	if (future == NULL)
	{
		return (NULL);
	}
	future ->n =n; 
	
	if (*head)
	{
		present = *head;
		
		while (present->next != NULL)
		
			present = present->next;

		future->next = NULL;
		future->next = present;
		present->next = future;

	}
	future->next = *head;
	future->prev = NULL;
	*head = future;
	return (*head);
}
		
	
