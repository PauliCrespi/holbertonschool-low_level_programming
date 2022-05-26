#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct hash_node_s 
 *
 * @key: The key
 * The key is unique 
 * @value: The value 
 * @next: A pointer 
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash 
 *
 * @size: The size
 * @array: An array
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;


unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);

#endif
