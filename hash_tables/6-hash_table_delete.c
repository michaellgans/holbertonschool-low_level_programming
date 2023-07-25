#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x; /* iterator */
	hash_node_t *tmp1;
	hash_node_t *tmp2;

	if (ht == NULL)
		return;

	for (x = 0; x < ht->size; x++)
	{
		tmp1 = ht->array[x];
		while (tmp1 != NULL)
		{
			tmp2 = tmp1;
			free(tmp2->key);
			free(tmp2->value);
			free(tmp2);
			tmp1 = tmp1->next;
		}
	}
	free(ht->array);
	free(ht); /*free table*/
}
