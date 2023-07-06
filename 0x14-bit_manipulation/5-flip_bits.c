#include "main.h"

/**
 * flip_bits - flip bits
 * @n: the number
 * @m: the number
 *
 * Description: a function that flips bits
 *
 * Return: the flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int value = 0;
	unsigned long int flip;

	flip = n ^ m;

	while (flip)
	{
		value += flip & 1;
		flip >>= 1;
	}
	return (value);
}
