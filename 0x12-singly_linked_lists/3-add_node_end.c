#include "lists.h"
#include <string.h>

/**
 * add_node_end - add node at end of list
 * @head: the pointer
 * @str: the string to be added
 *
 * Description: A function that adds a new node at the end of
 * a linked list and returns its address
 *
 * Return: The new items address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;

	list_t *temporary = *head;

	unsigned int i = 0;

	while (str[i] != '\0')
		i++;

	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = i;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while (temporary->next)
		temporary = temporary->next;
	temporary->next = ptr;

	return (0);
}

