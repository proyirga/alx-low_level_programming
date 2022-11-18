#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table
 * *or NULL if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht;

	/* allocate memory for the hash table */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(size * sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i <= size; i++)
		ht->array[i] = NULL;
	return (ht);
	free(ht);
}
