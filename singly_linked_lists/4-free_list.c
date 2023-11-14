#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * void free_list - a function that frees a list_t list
 *
 * @head: pointer to the head of the list_t
 *
 * Return: freed head pointer
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}
	else
	{
		free_list(head->next);
		free(head->str);
		free(head);

	}
}
