#include "lists.h"
/**
 *
 *
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int ode;
	listint_t *first, *second = *head;


	first = malloc(sizeof(listint_t));
	
	if (first == NULL)
	{
		return (NULL);
	}
	first->n = n;
	if (idx== 0)
	{
		first->next = second;
		*head = first;
		return (first);
	}
	for (ode = 0; ode < (idx - 1); ode++)
	{
		if (second == NULL || second->next == NULL)
		{
			return (NULL);
		}
		second = second->next;

	}
	first->next = second->next;
	second->next = first;
	return (first);
}	
