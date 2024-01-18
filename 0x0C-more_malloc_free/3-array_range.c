#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: function parameter.
 * @max: function parameter.
 * Return: always NULL
 */

int *array_range(int min, int max)
{
	int *a, b, *c;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		a = malloc(max - min + 1);
		if (a == NULL)
		{
			return (0);
		}
		for (b = min, c = a; b <= max; b++)
		{
			*c++ = b;
		}
		return (a);
	}
}
