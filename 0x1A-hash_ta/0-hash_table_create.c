#include "hash_tables.h"

/**
 * hash_table_create - new hash table.
 * @size:  size of array.
 * Return: pointer to new table, or NULL.
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int count;
	hash_table_t *newnode = NULL;

	newnode = malloc(sizeof(hash_table_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->size = size;
	newnode->array = malloc(sizeof(hash_node_t **) * size);
	if (!newnode->array)
	{
		free(newnode);
		return (NULL);
	}
	for (count = 0; count < size; count++)
	{
		(newnode->array)[count] = NULL;
	}
	return (newnode);
}
