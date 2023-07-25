#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x; /* iterator */
	hash_node_t *current; /* you are here */

	if (ht == NULL) /* if ht is empty, don't print */
		return;

	/* start in the brackets */
	printf("{");
	for (x = 0; x < ht->size; x++) /* traverse through list */
	{
		current = ht->array[x]; /* start at first index */
		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);
			current = current->next; /* traverse */
			if (current != NULL)
				printf(", ");
		}
	}
	printf("}\n");
}
