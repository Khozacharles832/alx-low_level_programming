#include "main.h"

/**
 * get_endianness - A function that gets the endian value of a machine
 *
 * Return: 0 or 1 depending on the value
 */
int get_endianness(void)
{
	unsigned int endie;
	char *c;

	endie = 1;
	c = (char *) &endie;

	if (*c)
		return (1);
	else
		return (0);
}
