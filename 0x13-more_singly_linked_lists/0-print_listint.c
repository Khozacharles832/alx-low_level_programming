#include "lists.h"

/**
 * print_listint - prints the list
 * @h: the head pointer
 *
 * Description: a function that prints a linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
