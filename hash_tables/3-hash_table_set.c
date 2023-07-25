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
	hash_node_t *new_node; /* create pointer to new node */
	unsigned long int index; /* where new node should be located */
	hash_node_t *current; /* current pointer */
	/* Edge Cases */
	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	/* determine where node should be inserted */
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (0);
	}
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0) /* Does key already exist? */
		{
			free(current->value); /* free old value */
			current->value = strdup(value); /* update value */
			return (1);
		}
		current = current->next; /* next node */
	}
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
