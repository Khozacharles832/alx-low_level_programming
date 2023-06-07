#include "main.h"

/**
 * _strlen_recursion - calculates and print the lenght of the string
 * @s: string to be measured
 *
 * Return: on success 1
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
