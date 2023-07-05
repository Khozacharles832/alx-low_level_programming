#include "lists.h"

/**
 * free_listint2 - frees memory of a linked list
 * @head: the head pointer of list to be freed
 *
 * Description: A function to clear memory allocated
 * for a linked list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
		*head = NULL;
	}
	
}
