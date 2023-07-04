#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: the doublr pointer to the list
 *
 * Description: A function that deletes the head node
 *
 * Return: the data deleted
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (!(*head) || !head)
		return (0);

	temp = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = temp;

	return (data);
}
