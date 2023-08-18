#include "lists.h"

/**
 * free_dlistint - clear a double linked list
 * @head: the head pointer
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *_res;

	while (head != NULL)
	{
		_res = head->next;
		free(head);
		head = _res;
	}
}
