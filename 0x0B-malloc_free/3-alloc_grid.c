#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - returns a pointer to a 2D array
 *@width: number of rows of grid
 *@height: number of height of grid
 *@grid: pointer for casting 2 diimensional grid
 *
 *Return: NULL on failure if w or h <= 0, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(width * sizeof(int *)); /*typecasting malloc to grid*/
	if (grid == NULL)
		return (NULL);
	
	for (i = 0; i < width; i++) /*initializing grid's allocated memory across columns*/
	{
		grid[i] = malloc(height * sizeof(int)); /*allocates memory for column elements*/
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]); /*frees formerly allocated column element if allocation fail*/
			}
			free(grid); /*entire grid freed*/
			return (NULL);
		}
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
