#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: the head pointer
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t _num = 0;

	while(h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		_num++;
	}
	return (_num);
}
