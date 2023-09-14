#include "hash_tables.h"

/**
 * hash_djb2 - hash function that implement djb2 algorithm
 * @str: key to the transformation
 *
 * Return: integer after the operations
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int num;

	hash = 5381;
	while ((num = *str++))
	{
		hash = ((hash << 5) + hash) + num;
	}
	return (hash);
}
