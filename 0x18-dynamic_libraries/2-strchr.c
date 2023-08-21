#include "main.h"

/**
 * _strchr - locates a characters in a string
 * @s: the string
 * @c: the char
 *
 * Return: NULL if not found, otherwise
 */
char *_strchr(char *s, char c)
{
	char *_pointer = s;

	for (; *_pointer != '\0'; _pointer)
	{
		if (*_pointer == c)
			return (_pointer);
	}

	if (*_pointer == c)
		return (_pointer);

	return (0);
}
