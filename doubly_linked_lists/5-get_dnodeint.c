#include "lists.h"
/**
 * get_dnodeint_at_index - funtion
 * @head: pointer
 * @index: index node to return
 * Return: the nth node or if it does not exist, NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}

	return (head);
}
