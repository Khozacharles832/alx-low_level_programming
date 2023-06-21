#include "3-calc.h"

/**
 * main - check the code 
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int a, b, answer;
	int (*get_op)(int, int);

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	get_op = get_op_func(argv[2]);

	if (get_op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	answer = get_op(a, b);
	printf("%d\n", answer);
	return (0);
}
