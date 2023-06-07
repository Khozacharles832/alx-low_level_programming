#include "main.h"

/**
 * values - evaluates from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 t0 n
 *
 * Return: 1 on success else -1
 */
int values(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (values(a, b + 1));
}

/**
 * is_prime_number - checks if number is prime or not
 * @n: the integer
 * 
 * Return: 1 on success, else -1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (values(n, 2));
}
