#include "main.h"

/**
 * set_bit - A function that sets a bit to 1 at a given index
 * @n: the int
 * @index: the index of the bit you want to set
 *
 * Return: 1 if it worked or -1 if error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int displayMask;

	displayMask = 1UL << index;
	if (!(*n & displayMask))
	{
		*n |= displayMask;
		return (1);
	}
	return (-1);
}
