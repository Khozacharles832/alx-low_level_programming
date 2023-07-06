#include "main.h"

/**
 * get_bet - gets a bit at given index
 * @n: the number of get
 * @index: the index
 *
 * Description: a function that gets a bit at a
 * given index
 *
 * Return: the result of the computation
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	value = ((n >> index) & 1);

	if (index > 64)
		return (-1);
	return (value);
}
