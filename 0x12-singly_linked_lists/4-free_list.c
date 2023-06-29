#include "lists.h"

/**
 * free_list - free a linked list
 * @head: the list to be freed
 *
 * Description: A function that frees a linked list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
