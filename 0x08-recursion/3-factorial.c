#include <stdio.h>
#include "main.h"

/**
 * factorial - function definition.
 * @n: function parameter.
 * Return: eventually 1 0r -1.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
