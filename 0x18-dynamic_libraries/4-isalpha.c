#include "main.h"

/**
 * _isalpha - returns an int if char is upper/ lower case
 * @c:
 * the char
 *
 * Return: returns 1 if capital / 0 if not
 */
int _isalpha(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}
