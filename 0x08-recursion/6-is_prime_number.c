#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - function definition.
 * @n: function parameter.
 * Return: always an integer.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
		return (_pr(n, 2));
}


/**
 * _pr - function definition.
 * @a: function parameter.
 * @b: function parameter.
 * Return: always an integer.
 */

int _pr(int a, int b)
{
	if (b < 2 || b > a)
	{
		b = 2;
	}
	if (a % b == 0)
	{
		if (b == a)
		{
			return (1);
		}
		else
			return (0);
	}
	else
		return (_pr(a, ++b));
}
