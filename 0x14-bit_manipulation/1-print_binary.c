#include "main.h"

/**
 * print_binary - a function that prints a binary representation of a number
 * @n: the number to convert to binary
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int displayMask;
	int first;

	displayMask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	first = 0;

	while (displayMask)
	{
		if (n & displayMask)
		{
			_putchar('1');
			first = 1;
		} else if (first)
		{
			_putchar('0');
		}
		displayMask >>= 1;
	}
}
