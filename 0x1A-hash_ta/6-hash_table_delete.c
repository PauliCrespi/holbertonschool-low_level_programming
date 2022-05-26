#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: pointer to hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux, *check;
	unsigned int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		aux = ht->array[i];
		while (aux)
		{
			check = aux;
			free(check->key);
			free(check->value);
			free(check);
			aux = aux->next;
		}
	}
	free(ht->array);
	free(ht);
}
