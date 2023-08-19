#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: the head node
 * @index: the index
 *
 * Return: the new nodes address
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (head && count < index)
	{
		head = head->next;
		count++;
	}
	return (head);
}
