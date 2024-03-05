#include <stdio.h>

/**
 * reverse_array - function defined.
 * @a: function parameter.
 * @n: function parameter.
 * Return: always void.
 */

void reverse_array(int *a, int n)
{
	int *b;
	int c, d;

	b = a;
	for (c = 1; c < n; c++ && b++)
	{
	}
	for (c = 1; c <= (n / 2); c++ && a++ && b--)
	{
		d = *a;
		*a = *b;
		*b = d;
	}
}
