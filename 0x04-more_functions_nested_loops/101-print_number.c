#include <stdio.h>
#include "main.h"

/**
 * print_number - function definition.
 * @n: function parameter.
 * Return: always void;
 */

void print_number(int n)
{
	char s;

	if (n < 0)
	{
		_putchar('-');
		n *= (-1);
	}
	s = (n % 10) + '0';
	n = n / 10;
	if (n != 0)
	{
		print_number(n);
	}
	_putchar(s);
	return;
}
