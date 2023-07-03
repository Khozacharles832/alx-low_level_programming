#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: the pointer to the list
 *
 * Description: A function that frees the memory allocated for 
 * a linked list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	if (!head)
		return;
	free_listint(head->next);
	free(head);
}
