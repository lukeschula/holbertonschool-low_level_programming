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

