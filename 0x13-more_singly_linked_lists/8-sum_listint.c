#include "lists.h"

/**
 * sum_listint - adds all the elements of a linked list
 * @head: The pointer to the head
 *
 * Description: A function that adds all the elements of a
 * linked list and returns the sum
 *
 * Return: the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int add = 0;


	if (!head)
		return (0);
	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
