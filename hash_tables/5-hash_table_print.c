#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x; /* iterator */
	hash_node_t *current; /* you are here */
	int flag = 1; /* comma or no comma */

	if (ht == NULL) /* if ht is empty, don't print */
		return;

	/* start in the brackets */
	printf("{");
	for (x = 0; x < ht->size; x++) /* traverse through list */
	{
		current = ht->array[x]; /* start at first index */
		while (current != NULL)
		{
			if (flag == 0)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);

			flag = 0; /* next one gets a comma */
			current = current->next; /* traverse */
		}
	}
	printf("}\n");
}
