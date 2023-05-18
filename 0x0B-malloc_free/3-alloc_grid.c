#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - this function returns a pointer to a 2 dimensional array of int
 * @width: an int parameter
 * @height: an int parameter
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **g;
	int i, j;

	if (width == 0)
	{
		return (NULL);
	}
	g = malloc(height * sizeof(int **));
	if (g == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		g[i] =  malloc(width * sizeof(int));
		if (g[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(g[j]);
			free(g);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			g[i][j] = 0;
	return (g);
}
