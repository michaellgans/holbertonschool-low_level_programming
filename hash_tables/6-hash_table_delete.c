#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x; /* iterator */
	hash_node_t *current;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	for (x = 0; x < ht->size; x++)
	{
		current = ht->array[x]; /* how to move through the buckets */
		while (current != NULL)
		{
			temp = current->next;
			/* ^^saves the pass to the next node before deleting */
			free(current->key);
			free(current->value);
			free(current);
			current = temp; /* moves to the next node */
		}
		ht->array[x] = NULL; /*set array to NULL after deleting data */
	}
	free(ht->array); /*free array*/
	free(ht); /*free table*/
}
