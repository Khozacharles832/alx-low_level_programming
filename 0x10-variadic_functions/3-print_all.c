#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: is a list of types of the arguments passed to the function
 * Description: a variadic function that prints anything as long as the format match
 *
 * Return: the arguments
 */
void print_all(const char * const format, ...)
{
	int j = 0, i = 0;
	char *separator = ", ";
	char *string;
	va_list args;

	va_start(args, format);

	while (format && format[i])
		i++;
	while (format && format[j])
	{
		if (j == (i - 1))
		{
			separator = "";
		}
		switch (format[j])
		{
		case 'c':
			printf("%c%s", va_arg(args, int), separator);
			break;
		case 'i':
			printf("%d%s", va_arg(args, int), separator);
			break;
		case 'f':
			printf("%f%s", va_arg(args, double), separator);
			break;
		case 's':
			string = va_arg(args, char *);
			if (string == NULL)
				string = "(nil)";
			printf("%s%s", string, separator);
			break;
		}
		j++;
	}
	printf("\n");
	va_end(args);
}
