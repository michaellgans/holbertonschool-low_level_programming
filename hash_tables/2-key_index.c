#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: points to the key
 * @size: size of array of hash table
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* Define variables */
	unsigned long int hashValue, index;

	/* use algorithm to get hashValue */
	hashValue = hash_djb2(key);

	/* use % to find index */
	index = hashValue % size;

	return (index);
}
