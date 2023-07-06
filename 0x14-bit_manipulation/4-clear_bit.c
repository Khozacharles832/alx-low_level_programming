#include "main.h"

/**
 * clear_bit - clear a bit at index
 * @n: the number
 * @index: the index
 *
 * Description: a function that clears a bit at a givrn
 * index
 *
 * Return: the cleared bit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if ((*n >> index) & 1)
	{
		*n -= 1 << index;
		return (1);
	}
	return (1);
}
