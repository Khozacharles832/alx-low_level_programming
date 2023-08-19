#include "lists.h"

/**
 * add_dnodeint_end - add node at end
 * @head: the head pointer
 * @n: int data
 *
 * Return: the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *_mem, *second;

	_mem = malloc(sizeof(dlistint_t));

	if (_mem == NULL)
		return (NULL);

	_mem->n = n;
	_mem->next = NULL;
	_mem->prev = NULL;

	if (*head == NULL)
	{
		*head = _mem;
		return (_mem);
	}
	second = *head;

	while (second->next != NULL)
		second = second->next;
	second->next = _mem;
	_mem->prev = second;

	return (_mem);
}
