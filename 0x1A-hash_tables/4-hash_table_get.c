#include "hash_tables.h"

/**
 * hash_table_get - gets a value from the hash table
 * @key: the key
 * @ht: the hash table
 *
 * Return: the value, else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *current;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	current = ht->array[i];
	if (current == NULL)
		return (NULL);
	while (strcmp(current->key, key) && current != NULL)
	{
		current = current->next;
	}
	if (current == NULL)
		return (NULL);
	else
		return (current->value);
}
