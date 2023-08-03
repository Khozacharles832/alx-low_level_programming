#include "main.h"

/**
 * binary_to_uint - A function to convert binary to int
 * @b: the binary string to convert
 *
 * Return: the converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	result = 0;
	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = (result << 1) + (*b++ - '0');
	}
	return (result);
}
