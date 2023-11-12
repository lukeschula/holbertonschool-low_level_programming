#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a listint_t list.
 *
 * @h: double pointer to the listint_t
 * @n: integer input
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *end;

	new = malloc (sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;


