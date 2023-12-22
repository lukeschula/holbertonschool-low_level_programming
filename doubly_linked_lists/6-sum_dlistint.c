#include "lists.h"
/**
 * sum_dlistint - function
 * @head: pointer to head
 * Return: sum of data or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{	
	int s;
	int x;

	for (x = 0; head;x++)
	{
		s += head->n;
	       head = head->next;
	}
	return (s);
}	
