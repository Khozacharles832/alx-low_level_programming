#include "main.h"

/**
 * root - the iterator function
 * @s: the integer
 * @i: the nth integer
 *
 * Return: 1 on success, else -1
 */
int root(int s, int i)
{
	if (i * i == s)
		return (s);
	else if (i * i > s)
		return (-1);
	return (root(s, i + 1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the integer
 * Return: 1 on success, else -1
 */
int _sqrt_recursion(int n)
{
	return(root(n, 1));
}
