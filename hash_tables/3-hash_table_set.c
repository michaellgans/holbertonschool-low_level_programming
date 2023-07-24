#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: points to the table to update
 * @key: key to add
 * @value: value associated with key
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* declare new_node and allocate memory */
	hash_node_t *new_node;
	unsigned long int index;

	/* Edge Cases */
	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	/* determine where node should be inserted */
	index = key_index((const unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	/* Add node */
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	/* add node into linked list at index */
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node; /* creates a new linked list */
	}
	else
	{
		new_node->next = ht->array[index]; /* add it to the beginning */
		ht->array[index] = new_node;
	}
	return (1);
}
