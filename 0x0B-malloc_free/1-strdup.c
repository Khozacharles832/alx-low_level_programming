#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: - the string to be duplicated
 *
 * Return: A pointer to the new allocated memory
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i;
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		;
	dup = (char *) malloc(n + 1 * sizeof(char));
	if (dup != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			dup[i] = str[i];
	}
	else
	{
		return (NULL);
	}
		dup[i] = '\0';

	return (dup);
}
