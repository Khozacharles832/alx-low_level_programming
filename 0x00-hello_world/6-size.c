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

printf("Size of a char: %d byte(s)", sizeof(a));
printF("Size of an int: %d byte(s)", sizeof(b));
printf("Size of a long int: %d byte(s)", sizeof(c));
printf("Size of a long long int: %d byte(s)", sizeof(d));
printf("Size of a float: %d byte(s)", sizeof(f));

return (0);
}
