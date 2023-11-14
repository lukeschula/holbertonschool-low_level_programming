#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_t *add_node_end - a function that
 * adds a new node at the end of a list_t list.
 *
 * @head: double pointer to list_t, should be pointing to the list
 * that will be evaluated
 * @str: pointer to the cahr being evaluated
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *end;
	char *s;
	int l;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	s = strdup(str);

	for (l = 0; s[l];)

	{
		l++;
	}
	new->str = s;
	new->len = l;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		end = *head;
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = new;
	}
	return (*head);
}

