#include "main.h"

/**
 * print_square - function definition for printing a square.
 * @size: function parameter.
 * _putchar - function call to print single integers.
 * Return: Always void.
 */

void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
	for (a = 1; a <= size; a++)
	{
	for (b = 1; b <= size; b++)
		_putchar('#');
	_putchar(10);
	}
	}
	else
		_putchar(10);
}
