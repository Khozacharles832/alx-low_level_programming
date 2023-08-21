#include "main.h"

/**
 * _Puts - prints a string followed by a new line
 * @str: the string to print
 *
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
