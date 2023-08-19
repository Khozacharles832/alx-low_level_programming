#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at index
 * @h: the head pointer
 * @n:the int data
 * @idx: theindex
 *
 * Return: the new nodes pointer
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *_mem;

	new = _mem = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		if (_mem == NULL)
			return (NULL);
		_mem = _mem->next;
	}

	if (_mem->next == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = _mem->next;
	new->prev = _mem;
	_mem->next->prev = new;
	_mem->next = new;

	return (new);
}

