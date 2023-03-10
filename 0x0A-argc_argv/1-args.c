#include <stdio.h>
#include "main.h"
/**
 * main - print the number of arguments.
 * @argc: count arguments.
 * @argv: array of arguments.
 *
 * Return: Always 0(success).
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Avoid argv */
	printf("%i\n", argc - 1);
	return (0);
}
