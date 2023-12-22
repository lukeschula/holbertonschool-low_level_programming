#include "hash_tables.h"
/**
 *
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *add;
	char *copy;
	unsigned long int indx, x;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copy = strdup(value);
	if (copy == NULL)
		return (0);

	indx = key_index((const unsigned char *)key, ht->size);
	for (x = indx; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = copy;
			return (1);
		}
	}

	add = malloc(sizeof(hash_node_t));
	if (add == NULL)
	{
		free(copy);
		return (0);
	}
	add->key = strdup(key);
	if (add->key == NULL)
	{
		free(add);
		return (0);
	}
	add->value = copy;
	add->next = ht->array[indx];
	ht->array[indx] = add;

	return (1);
}
