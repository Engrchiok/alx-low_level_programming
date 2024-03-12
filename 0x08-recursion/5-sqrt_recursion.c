#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - functoon definition.
 * @n: function parameter.
 * Return: always an integer.
 */

int _sqrt_recursion(int n)
{
	return (_sqr(n, 1));
}


/**
 * _sqr - function definition.
 * @a: function parameter.
 * @b: function parameter.
 * Return: always an integer.
 */

int _sqr(int a, int b)
{
	if (b * b > a)
	{
		return (-1);
	}
	else if (b * b == a)
	{
		return (b);
	}
	else
		return (_sqr(a, ++b));
}
