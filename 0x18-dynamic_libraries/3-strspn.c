#include "main.h"

/**
 * _strspn - finds the length of a sub string
 * @s: the str
 * @accept: the cahrs being matched
 *
 * Return:nthe length of sub str
 */
unsigned int _strspn(char *s, char *accept)
{
	char *_pointer = s;
	char *_pointer2 = accept;
	int len = 0, i, k;

	for (i = 0; _pointer[i] != '\0'; i++)
	{
		if (len != i)
			break;
		for (k = 0; _pointer2[k] != '\0'; k++)
		{
			if (_pointer[i] == _pointer2[k])
				len++;
		}
	}
	return (len);
}
