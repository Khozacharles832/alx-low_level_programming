#include "lists.h"

/**
 * print_list - prints the elements of a linked list
 * @h: The head pointer of the list
 *
 * Description: A function that prints the elements
 * of a linked list and returns the number of nodes printed
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
