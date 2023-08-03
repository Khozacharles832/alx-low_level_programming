#include "main.h"

/**
 * flip_bits - a function that returns the number of bits needed
 * to flip from one number to the other
 * @n: the starting point
 * @m: the target
 *
 * Return: the number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long m)
{
	unsigned long int xor;
	unsigned int i;

	i = 0;
	for (xor = n ^ m; xor; xor >>= 1)
	{
		i += xor & 1;
	}
	return (i);
}
