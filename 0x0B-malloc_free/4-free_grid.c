#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees two dimension array
  * @grid: two dimension grid
  * @height: height dimension of grid
  *
  * Return: Nothing
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
