#include "lists.h"

/**
 * get_nodeint_at_index - gets a node at index
 * @index: The position of the node to retrieve
 * @head: The pointer to the linked list
 *
 * Description: A function that retrieves a node at a
 * given index int the linked list
 *
 * Return: the node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *ptr;

	if (!head)
		return (NULL);

	ptr = head;
	while (count < index)
	{
		if (!ptr)
			return (NULL);
		ptr = ptr->next;
		count++;
	}
	return (ptr);
}
