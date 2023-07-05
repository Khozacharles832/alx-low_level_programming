#include "lists.h"

/**
 * add_nodeint - add a node at the beginning of list
 * @head: the double pointer to list
 * @n: the data stored in list
 *
 * Description: A function that adds a new node at beginning of list
 *
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = (*head);
	(*head) = new;

	return (new);
}
