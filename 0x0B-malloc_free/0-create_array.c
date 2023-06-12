#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array with specified char and size
 * @prt - the address of the allocated memory
 *
 * Return: the address of the new memory
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = (char*)malloc(size * sizeof(char));

	if (ptr == 0)
		return (0);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
