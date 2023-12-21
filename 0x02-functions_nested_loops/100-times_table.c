#include "main.h"

/**
 * print_times_table - function definition for printing times table of numbers between 0 to 15.
 * _putchar - function call for printing single integers.
 * Return: void.
 */

void print_times_table(int n)
{
	int m;
	int res;
	int h;
	int rt;
	int t;
	int r;
	int a;

	if (n > 0 && n < 15)
	{
	for (a = 0; a <= n; a++)
	{
	for (m = 0; m <= n; m++)
	{
	res = m * a;
	h = res / 100;
	rt = res % 100;
	t = rt / 10;
	r = res % 10;
	if (res >= 100)
	{
	_putchar(h + '0');
	}
	if (res >= 10)
	{
	_putchar(t + '0');
	}
	_putchar(r + '0');
	if (m < n)
	{
	_putchar(',');
	_putchar(' ');
	}
	if (m == n)
	{
	_putchar(10);
	}
	}
	}
	}
}
