#include "main.h"

/**
 * print_diagonal - function definition for drawing a diagonal line on the terminal.
 * @n: function parameter.
 * _putchar - funtion call for printing single integers ('characters').
 * Return: Always void.
 */

void print_diagonal(int n)
{
	if ( n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int d;

		for (d = 1; d <= n; d++)
		{
			int g;

		for (g = 1; g < d; g++)
		{
			_putchar(' ');
		}
			_putchar('\\');
			_putchar(10);
		}
	}
}
