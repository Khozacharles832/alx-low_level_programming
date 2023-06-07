#include "main.h"

/**
 * _factorial - returns the factorial of a given number
 * @n: the integer to be evaluated
 *
 * Description: a function to return factorial of a givun integer
 * Return: on success 1, else -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
