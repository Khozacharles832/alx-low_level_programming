#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a single character to stdout
 * @c: the charcacter to print
 *
 * Return: On success 1, else -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
