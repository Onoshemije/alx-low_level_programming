#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2d array
 * @grid: memory block to be freed
 * @height: height of the array
 * Return: free'd grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
	}
}
