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
	char *a;

	if (size == 0)
	{
		return (0);
	}
	else
	{
		a = (char *)malloc(sizeof(char) * (size + 1));
		if (a == 0)
		{
			return (0);
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
			return (0);
		}
	}
}

