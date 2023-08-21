#include "main.h"

/**
 * _strlen - returns the lenght of a strings
 * @s: the string
 *
 * Return: the length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
