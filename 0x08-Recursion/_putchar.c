#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a single character to stdout
 * @c: the character to be printed
 *
 * Return: on success 0, else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
