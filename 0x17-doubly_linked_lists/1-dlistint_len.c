#include "lists.h"

/**
 * dlistint_len - returns the number of nodes in a linked list
 * @h: the head pointer
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t _len = 0;

	while (h != NULL)
	{
		h = h->next;
		_len++;
	}
	return (_len);
}
