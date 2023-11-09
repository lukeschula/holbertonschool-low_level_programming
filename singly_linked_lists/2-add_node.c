#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_t *add_node - a function that adds a new node at the beginning of a list_t list.
 *
 * @str: new string to add to the node
 * @head: double pointer to the list_t list
 *
 * Return: Address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_no;
	unsigned int len = 0;

	while(str[len])
	{
		len++;
	}

	new_no = malloc(sizeof(list_t));

	if (new_no == NULL)
	{
		return (NULL);
	}
		new_no->str = strdup(str);
		new_no->len = len;
		new_no->next = *head;
		
		*head = new_no;


return (*head);
}
