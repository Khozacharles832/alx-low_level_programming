#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_them_all - prints the sum of all the parameters
 * @n: the number of parameters
 * @...: the elipsis, variadic function
 * Description: A variadic funcion that returns the sum of
 * all the integers in its parameters
 *
 * Return: The result atfer computaton
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, count;
	unsigned int i;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		count = va_arg(args, int);
		sum += count;
	}
	va_end(args);
	return (sum);
}
