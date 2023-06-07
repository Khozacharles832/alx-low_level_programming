#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	int r;
	
	r = _factorial(1);
	printf("%d\n", r);
	r = _factorial(5);
	printf("%d\n", r);
	r =_factorial(10);
	printf("%d\n", r);
	r = _factorial(-1024);
	printf("%d\n", r);
	return (0);
}
