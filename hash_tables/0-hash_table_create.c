#include "hash_tables.h"

/**
 * hash_table_create - creates a has table
 * @size: size of table
 * Return: pointer to new table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/* Create pointer to table */
	hash_table_t *table;
	hash_node_t **array;

	/* Allocate space for table */
	table = malloc(sizeof(hash_table_t));

	/* If memory allocation fails */
	if (table == NULL)
	{
		free(table);
		return (NULL);
	}

	/* set the size of the table to size given by user */
	table->size = size;

	/* Allocate space for array */
	array = calloc(size, sizeof(*array));

	/* If memory allocation failes */
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	table->size = size;
	table->array = array;

	return (table);
}
