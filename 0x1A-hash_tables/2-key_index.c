#include "hash_tables.h"

/**
 * key_index - Associate an index to a key
 * @key: the key to be indexed
 * @size: size of the hash table
 *
 * Return: an int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int answer;

	answer = hash_djb2(key) % size;
	return (answer);
}
