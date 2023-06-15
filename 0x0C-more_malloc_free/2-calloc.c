#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmmeb: the number of members
 * @size: the size to be allocated
 *
 * Return: the pointer to the new space in memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int range = 0;
	int i = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	range = nmemb * size;
	ptr = malloc(range);

	if (ptr == NULL)
		return NULL;

	while (i < range)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
