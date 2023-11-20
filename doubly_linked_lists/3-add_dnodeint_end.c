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
		return (NULL):
	}
	future ->n =n; 
	
	if (*head)
	{
		present = *head;
		
		while (present->next != NULL)
		
			present = present->next;

		present->next = NULL;
		present->next = future ;
		uture->next = presnt;

	}

		
	
