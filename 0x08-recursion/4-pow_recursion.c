#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - function definition.
 * @x: function parameter.
 * @y: function parameter.
 * Return: always an integer.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, --y));
}
