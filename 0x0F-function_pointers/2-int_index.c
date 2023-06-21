#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a callback function to compare ints
 * @array: the aray to compare from
 * @size: the size of the array
 * @cmp: the function pointer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}
	return (-1);
}
