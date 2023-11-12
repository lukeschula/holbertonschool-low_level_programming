#include "lists.h"
/**
 *
 *
 *
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return (NULL);
	}
	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;

	}
	*head = NULL
}
