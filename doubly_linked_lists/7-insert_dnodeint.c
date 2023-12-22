#include "lists.h"
/**
 * insert_dnodeint_at_index - function
 * @h: linked lists
 * @idx: Index of the list where the new node should be added index 0
 * @n: Number
 * Return: the address of the new node, or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *add_node;
	dlistint_t *last;

	last = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (idx > 1)
	{
		last = last->next;
		if (last == NULL)
			return (NULL);
		idx--;
	}
	if (last->next == NULL)
		return (add_dnodeint_end(h, n));

	add_node = malloc(sizeof(dlistint_t));

	if (add_node == NULL)
		return (NULL);

	add_node->n = n;
	add_node->prev = last;
	add_node->next = last->next;
	last->next->prev = add_node;
	last->next = add_node;
	return (add_node);
}
