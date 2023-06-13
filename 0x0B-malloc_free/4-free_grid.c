#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees allocated memory
 * @grid: the address to be cleared
 * @height: the amount of coloumns to free
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;
	int *p;
	
	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}
