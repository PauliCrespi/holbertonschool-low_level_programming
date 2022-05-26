#include "hash_tables.h"

/**
  * hash_table_get - main func
  * @ht: hash table
  * @key: key
  * Return: value key, or NULL
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *check;

	if (!ht || !key)
	{
		return (NULL);
	}
	i = key_index((const unsigned char *)key, ht->size);
	check = ht->array[i];
	while (check)
	{
		if (strcmp(check->key, key) == 0)
			return (check->value);
		check = check->next;
	}
	return (NULL);
}
