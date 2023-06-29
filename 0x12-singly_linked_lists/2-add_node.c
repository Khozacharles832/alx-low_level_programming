#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a node
 * @head: the head pointer (double)
 * @str: the new string
 *
 * Description: a function that adds a new node at the 
 * beginning of a linked list
 *
 * Return: The address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = i;
	ptr->next = (*head);
	(*head) = ptr;

	return (*head);
}
