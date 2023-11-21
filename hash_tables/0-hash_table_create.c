#include "hash_tables.h"
/**
 *
 *
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_tables_t *t;

	if (size <= 0)
	{
		return (NULL);
	}
	t = malloc(sizeof(hash_table_t));

	if (t == NULL)
	{
		return (NULL);
	}
	t->array = malloc(sizeof(hash_node_t *) * size);

	if (t->array == NULL)
	{
		free(t);
		return (NULL);
	}

	t->size = size;

	return (t);
