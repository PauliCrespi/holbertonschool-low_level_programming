#include "hash_tables.h"

/**
 * hash_table_print - main func
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *check;
	unsigned int i, first = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		check = ht->array[i];
		while (check)
		{
			if (first == 1)
				printf(", ");
			printf("'%s': '%s'", check->key, check->value);
			check = check->next;
			first = 1;
		}
	}
	printf("}\n");
}
