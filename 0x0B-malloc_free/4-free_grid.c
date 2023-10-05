#include "main.h"
#include <stdlib.h>

/**
 * free_grid - prints 2 dimensional grid prevously created
 * @height: height of grid
 * @grid: print grid of integers
 *
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
