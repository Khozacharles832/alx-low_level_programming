#include "lists.h"

/**
 * listint_len - prints the length of  list
 * @h: the head pointer
 *
 * Description: prints the number of elements in linked list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
