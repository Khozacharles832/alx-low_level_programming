#include "main.h"

/**
 * clear_bit - a function that sets a bit to 0 at a given index
 * @n: the number to scan
 * @index: the index to set set bit at
 *
 * Return: 1 on success or -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int i;

	if (index > 64)
	{
		return (-1);
	}
	i = (*n >> index);
	*n &= ~(1UL << index);

	return (i);
}
