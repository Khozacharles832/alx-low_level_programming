#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints the numbers and separator
 * @separator: the separator
 * @n: the number of arguments
 * Description: a variadic function that prints all numbers
 * given to it, and the separator symbol
 *
 * Return: the result after computation
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int numbers;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		numbers = va_arg(args, int);
		printf("%d", numbers);

		if (i < n - 1)
		{
			printf("%s", separator);
		}
		if (separator == NULL)
		{
			printf(" ");
		}
	}
	va_end(args);
	printf("\n");
}
