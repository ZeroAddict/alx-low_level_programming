#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function frees the width || height && the entire grid
 * @grid: the pointed address of the two dimensional grid
 * @height: height of the grid
 * Return: Nothing; frees grid
 */

void free_grid(int **grid, int height)
{
	int j;

	if (grid != NULL)
	{
		for (j = 0; j < height; j++)
			free(grid[j]);
	}
	free(grid);
}
