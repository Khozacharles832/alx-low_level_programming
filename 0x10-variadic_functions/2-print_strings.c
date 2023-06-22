#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: the separator symbol
 * @n: the number of arguments
 * Description: a variadic function that prints strings and the separator
 *
 * Return: The strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);
		printf("%s", str);

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
