#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a callback function to iterate over each element of a array
 * @array: the array to be iterated
 * @size: the size of the array
 * @action: the function pointer
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
