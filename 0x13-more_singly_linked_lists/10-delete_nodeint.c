#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index
 * @head: the double pointer
 * @index: the position to delete at
 *
 * Description: a function to delete a node at index
 *
 * Return: 1 if success or 0 if fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *prev;
	unsigned int count;

	ptr = *head;
	count = 0;
	prev = NULL;

	if (*head == NULL)
		return (0);
	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	while (ptr && count < index)
	{
		prev = ptr;
		ptr = ptr->next;
		count++;
	}
	if (ptr == NULL)
		return (0);
	prev->next = ptr->next;
	free(ptr);
	return (1);
}
