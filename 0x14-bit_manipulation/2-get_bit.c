#include "main.h"

/**
 * get_bit - A function to return a bit at a given index
 * @n: the number to scan
 * @index: the index to get bit from
 *
 * Return: the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int displayMask;

	displayMask = 1UL << index;
	if (index > 63)
	{
		return (-1);
	}
	return ((n & displayMask) ? 1 : 0);
}
