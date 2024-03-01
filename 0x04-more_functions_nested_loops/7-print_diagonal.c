#include "main.h"

/**
 * print_diagonal - function definition for drawing a diagonal line on the terminal.
 * @n: function parameter.
 * _putchar - funtion call for printing single integers ('characters').
 * Return: always void.
 */

void print_diagonal(int n)
{
	int d, g;

	if ( n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (d = 1; d <= n; d++)
		{
		for (g = 1; g < d; g++)
		{
			_putchar(' ');
		}
			_putchar('\\');
			_putchar(10);
		}
	}
	return;
}
