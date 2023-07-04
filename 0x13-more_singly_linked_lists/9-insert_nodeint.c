#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at index
 * @head: the double pointer
 * @idx: the index at which to place new node
 * @n: the new data
 *
 * Description: a function that adds a new node at a
 * given index on linked list
 *
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	unsigned int count;
	listint_t *new = malloc(sizeof(listint_t));

	new->n = n;
	new->next = NULL;

	if (idx == 1)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		ptr = *head;
		count = 1;

		while (count < idx - 1 && ptr->next)
		{
			ptr = ptr->next;
			count++;
		}
		new->next = ptr->next;
		ptr->next = new;
	}
	return (new);
}

