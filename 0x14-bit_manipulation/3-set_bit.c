#include "main.h"

/**
 * set_bit - sets a bit to 1 at a given index
 * @n: a pointer to the number
 *
 * Description: a function that sets a bit to 1
 *
 * Return: the bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if (!(*n >> index) & 1)
	{
		*n += 1 << index;
		return (1);
	}
	return (-1);
}
