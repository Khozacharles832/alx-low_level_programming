#include "main.h"

/**
 * set_bit - sets a bit to 1 at a given index
 * @n: a pointer to the number
 * @index: the position to set bit at
 *
 * Description: a function that sets a bit to 1
 *
 * Return: the bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}


	mask = 1UL << index;
	*n |= mask;
	return (1);
}
