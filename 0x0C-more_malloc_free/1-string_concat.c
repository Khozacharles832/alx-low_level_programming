#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_concat - concats two strings
 * @s1: destination string
 * @s2: source string
 * @s: the number of char's to be concated from s2
 *
 * Return: a pointer to s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, count1 = 0, count2 = 0, len = 0;
	char *new;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	while (s1[i])
		i++;
	while (s2[count2])
		count2++;
	if (n >= count2)
		len = i + count2;
	else
		len = i + n;
	new = malloc(sizeof(char) * len + 1);
	if (new == NULL)
		return (NULL);

	count2 = 0;
	while (count1 < len)
	{
		if (count1 <= i)
			new[count1] = s1[count1];
		if (count1 >= i)
		{
			new[count1] = s2[count2];
			count2++;
		}
		count1++;
	}
	new[count1] = '\0';
	return (new);
}
