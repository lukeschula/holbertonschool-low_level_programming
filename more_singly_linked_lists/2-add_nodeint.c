#include "lists.h"
/**
 * add_nodeint - a function that adds a new node at the beginning of a listint_t list.
 *
 * @h: double pointer to the listint_t struct
 * @n: integer input 
 *
 * Return: a new node with the head pointer pointing to it
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
	{
		return (NULL);
	}

	*head = new;
	new->n = n;
	new->next = *head;

	return (new);
}
