#include "lists.h"
/**
 * delete_dnodeint_at_index - function
 * @head: linked lists
 * @index: Index the list
 * Return: 1 if it succeeded, -1
 *
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *last = *head;

	if (*head == NULL)
		return (-1);
	while (index > 0)
	{
		if (last == NULL)
			return (-1);
		last = last->next;
		index--;
	}
	if (last == *head)
	{
		*head = last->next;
		(*head)->prev = NULL;
	}
	else
	{
		last->prev->next = last->next;
		if (last->next)
			last->next->prev = last->prev;
	}
	free(last);
	return (1);
}
