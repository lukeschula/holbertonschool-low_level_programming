#include "hash_tables.h"
/**
 * hash_table_get - Retrieve the value associated hash table
 * @ht: A pointer to the hash table
 * @key: The key to get the value
 * Return: NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new_node;
	unsigned long int indx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	indx = key_index((const unsigned char *)key, ht->size);
	if (indx >= ht->size)
		return (NULL);

	new_node = ht->array[indx];
	while (new_node && strcmp(new_node->key, key) != 0)
		new_node = new_node->next;

	return ((new_node == NULL) ? NULL : new_node->value);
}
