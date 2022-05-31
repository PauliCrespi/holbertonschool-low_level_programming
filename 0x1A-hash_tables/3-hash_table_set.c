#include "hash_tables.h"

/**
 * hash_table_set - adds func
 * @ht: hash table
 * @key: key
 * @value: value of the key
 * Return: 1 or  0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *check;
	unsigned long int i;

	if (key == NULL || *key == '\0' || value == NULL || ht == NULL)
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	check = ht->array[i];
	while (check)
	{
		if (!strcmp(check->key, key))
		{
			free(check->value);
			check->value = strdup(value);
			if (check->value == NULL)
				return (0);
			return (1);
		}
		check = check->next;
	}
	check = ht->array[i];
	ht->array[i] = malloc(sizeof(hash_node_t));
	if (ht->array[i] == NULL)
		return (0);
	ht->array[i]->key = strdup(key);
	if (ht->array[i]->key == NULL)
	{
		free(ht->array[i]);
		return (0);
	}
	ht->array[i]->value = strdup(value);
	if (ht->array[i]->value == NULL)
	{
		free(ht->array[i]);
		return (0);
	}
	ht->array[i]->next = check;
	return (1);
}
