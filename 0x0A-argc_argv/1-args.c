#include <stdio.h>

/**
 * main - print the number of arguments passed
 * @argc: - the argument counter
 * @argv: - the argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
		printf("%d\n", argc - 1);
	return (0);
}
