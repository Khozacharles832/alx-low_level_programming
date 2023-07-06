#include "main.h"

/**
 * binary_to_uint - converts binary to int
 * @b: the string to convert
 *
 * Description: a function that converts a binary string to
 * an unsigned int, and returns the converted number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value, i;

	if (!b || !*b)
		return (0);

	value = 0;
	i = 0;

	while (b[i])
	{
		if (b[i] > 49)
			return (0);
		else if (b[i] == 49)
		{
			value <<= 1;
			value += 1;
		}
		else
			value <<= 1;
		i++;
	}
	return (value);
}
