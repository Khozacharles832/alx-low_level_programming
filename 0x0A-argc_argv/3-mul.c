#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to multply the first two arguments
 * @argc: arg counter
 * @argv: the argument vector
 *
 * Return: 0 on success, else 1
 */
int main(int argc, char **argv)
{
	int i, sum;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		sum = 1;

		for (i = 1; i < 3; i++)
			sum *= atoi(argv[i]);
		printf("%d\n", sum);
	}
	return (0);
}
