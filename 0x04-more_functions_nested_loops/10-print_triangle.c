#include <stdio.h>
#include "main.h"

/**
 * print_triangle - function that prints triangles.
 * @size: function parameter.
 * Return: always void.
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 1, j = 1; size > 0; j++, size--)
		{
			k = j;
			while (i < size)
			{
				_putchar(' ');
				i++;
			}
			i = 1;
			while (k > 0)
			{
				_putchar('#');
				k--;
			}
			_putchar(10);
		}
	}
}
