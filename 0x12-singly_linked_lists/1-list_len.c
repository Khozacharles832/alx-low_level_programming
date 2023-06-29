#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: the pointer
 *
 * Description: a function that returns the number
 * of elements in a linked list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
