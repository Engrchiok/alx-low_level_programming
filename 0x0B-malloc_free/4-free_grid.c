#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid.
 * @grid: function parameter.
 * @height: function parameter.
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	else
	{
	free(grid);
	for (i = 0; i  < height + 2; i++)
	{
		free(grid[i]);
	}
	return;
	}
}
