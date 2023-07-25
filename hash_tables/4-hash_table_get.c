#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to table
 * @key: pointer to key
 * Return: value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	/* Declare Variables first */
	unsigned long int index;
	hash_node_t *current;

	/* Edge Cases */
	if (ht == NULL || key == NULL)
		return (NULL);

	/* Calculate Index */
	index = key_index((const unsigned char *)key, ht->size);

	/* traverse list at index */
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL); /* Key not found */
}
