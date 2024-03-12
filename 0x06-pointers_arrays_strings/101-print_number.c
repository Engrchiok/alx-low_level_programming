#include <stdio.h>
#include "main.h"

/**
 * print_number - function definition.
 * @n: function parameter.
 * Return: nothing.
 */

void print_number(int n)
{
	int a, b, c, d, e;

	c = 1;
	d = 1;
	if (n < 0)
	{
		a = -n;
		b = -n;
		_putchar('-');
	}
	else
	{
		a = n;
		b = n;
	}
	while (a > 9)
	{
		c++;
		d = d * 10;
		a = a / 10;
	}
	while (c > 0)
	{
		e = b / d;
		_putchar(e + '0');
		b = b % d;
		d = d / 10;
		c--;
	}
}
