#include "main.h"

/**
 * times_table - function definition for multiplication table of 9.
 * _putchar - function call to print single characters.
 * Return: void.
 */

void times_table(void)
{
	int t;
	int n;
	int res;
	int d;
	int m;
	for (t = 0; t <= 9; t++)
	{
	for (n = 0; n <= 9; n++)
	{
		res = t * n;
		d = res / 10;
		m = res % 10;
	if ( d > 0)
	{
	_putchar(d + '0');
	}
	_putchar(m + '0');
	if (n < 9)
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	_putchar(10);
	}
}
