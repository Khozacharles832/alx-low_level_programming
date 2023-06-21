#include "function_pointers.h"

/**
 * print_name - a callback function using function pointers
 * @name: the name to print
 * @f: the function pointer given as an argument
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
