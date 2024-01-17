#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid.
 * @grid: function parameter.
 * @height: function parameter.
 * Return: no return.
 */

void free_grid(int **grid, int height)
{
	int i;

	free(grid);
	for (i = 0; i  < height + 2; i++)
	{
		free(grid[i]);
	}
}
