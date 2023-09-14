#include "hash_tables.h"

/**
 * free_node - Free a node.
 * @node: Node to free.
 *
 * Return: Void.
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * hash_table_set - set a value in the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value
 *
 * Return: 1 on success else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new_node, *current;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup((char *)key);
	new_node->value = strdup((char *)value);
	new_node->next = NULL;
	if (ht->array[i] == NULL)
		ht->array[i] = new_node;
	else
	{
		current = ht->array[i];
		if (strcmp(current->key, key) == 0)
		{
			new_node->next = current->next;
			ht->array[i] = new_node;
			free_node(current);
			return (1);
		}
		while (current->next != NULL && strcmp(current->next->key, key) != 0)
		{
			current = current->next;
		}
		if (strcmp(current->key, key) == 0)
		{
			new_node->next = current->next->next;
			free_node(current->next);
			current->next = new_node;
		}
		else
		{
			new_node->next = ht->array[i];
			ht->array[i] = new_node;
		}
	}
	return (1);
}
