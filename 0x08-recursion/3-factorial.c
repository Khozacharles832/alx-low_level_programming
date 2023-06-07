#include "main.h"

/**
 * _factorial - returns the factorial of a given number
 * @n: the integer to be evaluated
 *
 * Return: on success 1, else -1
 */
int _factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * _factorial(n - 1));
}
