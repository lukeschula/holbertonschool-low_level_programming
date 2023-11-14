#include "lists.h"
/**
 *
 *
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *ptr, *phd = *head;

	if (head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = phd->next;
		free(phd);
		return (1);
	}

	while (phd != NULL && a < (index - 1))
	{
		phd = phd->next;
		a++;
	}
	if (phd == NULL || phd->next == NULL)
	{
		return (-1);

		ptr = phd->next;
		phd->next = ptr->next;
	}
		return (1);
}
