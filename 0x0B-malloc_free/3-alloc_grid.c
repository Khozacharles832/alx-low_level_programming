#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocate memory for 2 dimensional array
 * @width: the arrays width || rows
 * @height: the arrays height || coulumns
 *
 * Return: A pointer, else NULL
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j, n;
	int *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(ptr + i) = (int *)malloc(width * sizeof(int));
		if (*(ptr + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				p = ptr[i];
				free(p);
			}
			free(ptr);
			return (NULL);
		}
	}
	for (n = 0; n < height; n++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[n][j] = 0;
		}
	}
	return (ptr);
}
