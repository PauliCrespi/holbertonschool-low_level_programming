#include "hash_tables.h"
/**
 *key_index - main func
 *@key: specific
 *@size: size int
 *Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
