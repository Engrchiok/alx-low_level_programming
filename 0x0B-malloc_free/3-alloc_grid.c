#include <stdlib.h>
/**
 * alloc_grid - 2 dimensional array of integers function.
 * @width: function parameter.
 * @height: function parameter.
 * Return: always 0 or variable ary.
 */
int **alloc_grid(int width, int height)
{
	int **ary, a, b;

	if (width <= 0 || height <= 0)
		return (0);
	ary = (int **)  malloc(sizeof(int *) * height);
	if (ary == NULL)
		return (0);
	for (a = 0; a < height; a++)
	{
		ary[a] = malloc(sizeof(int) * width);
		if (ary[a] == NULL)
		{
			while (a >= 0)
			{
			free(ary[a--]);
			}
			return (0);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			ary[a][b] = 0;
		}
	}
	return (ary);
}
