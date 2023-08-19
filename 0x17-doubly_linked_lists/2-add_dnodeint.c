#include "lists.h"

/**
 * add_dnodeint - insert new node
 * @head: the head pointer
 * @n: int data
 *
 * Return: the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *_mem;

	_mem = malloc(sizeof(dlistint_t));

	if (_mem == NULL)
		return (NULL);
	_mem->n = n;
	_mem->prev = NULL;
	_mem->next = *head;

	if (*head != NULL)
		(*head)->prev = _mem;
	*head = _mem;

	return (_mem);
}
