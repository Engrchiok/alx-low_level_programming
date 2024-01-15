#include <stdlib.h>

/**
 * create_array - function definition that creates an array of chars.
 * @c: function parameter.
 * @size: function parameter.
 * Return: returns 0 or variable a.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int b;
	char *a = malloc(size * sizeof(unsigned int));

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (b = 0; b < size; b++)
		{
			a[b] = c;
		}
		if (a[0] == c && a[b - 1] == c)
		{
			return (a);
		}
		else
			return (NULL);
	}
}
