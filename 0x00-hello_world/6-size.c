#include <stdio.h>
/**
 * main - This is a program that prints the size of various data types
 * Return: 0(if 0, then program success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %d", sizeof(a));
printf("Size of int: %d", sizeof(b));
printf("Size of long int: %d", sizeof(c));
printf("Size of long long int: %d", sizeof(d));
printf("Size of float: %d", sizeof(f));

return (0);
}
