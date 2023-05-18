#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - this function frees a 2 dimentional grid previously created
 * by my alloc_gride function.
 * @grid: parameter passed
 * @height: parameter passed
 * Return: None
 */

void free_grid(int **grid, int height)
{
	int e;

	if (grid == NULL || height == 0)
		return;
	for (e = 0; e < height; e++)
		free(grid[e]);
	free(grid);
}
