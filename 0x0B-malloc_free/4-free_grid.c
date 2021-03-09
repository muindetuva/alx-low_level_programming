#include <stdlib.h>
#include "holberton.h"

/**
  * free_grid - frees memory allocated in a grid
  * @grid: The grid to be freed
  * @height: the height of the grid
  *
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
