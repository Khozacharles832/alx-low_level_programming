#include "hash_tables.h"

/**
 * key_index - returns the index of a key
 * @key: the key
 * @size: the size of the hash table
 *
 * Return: the index in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
