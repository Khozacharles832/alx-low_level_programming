#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all the arguments it receives
 * @argc: the argument counter
 * @argv: the argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
