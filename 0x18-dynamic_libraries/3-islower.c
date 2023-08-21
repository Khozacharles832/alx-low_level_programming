#include "main.h"

/**
 * _islower - print the characters at lowercase
 * @c: the letter in test
 *
 * Return: 0 if not lowercase, else 1
 */
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}
