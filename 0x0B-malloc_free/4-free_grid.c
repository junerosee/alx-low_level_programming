#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees memory of 2d array
 * @grid: the 2d grid
 * @height: the height dimension of the 2d grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
