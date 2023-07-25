#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x; /* iterator */
	hash_node_t *current;

	for (x = 0; x < ht->size; x++)
	{
		while (ht->array[x])
		{
			current = ht->array[x]->next;

			free(ht->array[x]->key);
			free(ht->array[x]->value);
			free(ht->array[x]);

			ht->array[x] = current;
		}
	}
	free(ht->array); /*free array*/

	ht->array = NULL;
	ht->size = 0;

	free(ht); /*free table*/
}
