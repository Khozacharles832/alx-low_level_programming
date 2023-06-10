#include <stdio.h>
#include <stdlib.h>

 /**
 * main - program to add two arguments and prints the results
 * @argc: the argument counter
 * @argv: the argument vector
 *
 * Return: 0 on success, else 1
 */
int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc < 1)
		printf("0\n");
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}	

