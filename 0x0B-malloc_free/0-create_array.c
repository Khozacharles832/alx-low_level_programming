#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array with specified char and size
 * @size: - the size to allocated
 * @c: - the initialiser
 *
 * Return: the address of the new memory
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = (char *)malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
