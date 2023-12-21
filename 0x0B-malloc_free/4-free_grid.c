#include <stdlib.h>

void free_grid(int **grid, int height)
{
	int i;

	free(grid);
	for (i = 0; i  < height + 2; i++)
	{
		free(grid[i]);
	}
}
