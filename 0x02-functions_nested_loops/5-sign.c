#include "main.h"

/**
 * print_sign - function definition that prints the sign of a number.
 *
 * _putchar - function call that prints single  characters.
 *
 * @n: number argument that is being checked.
 *
 * Return: 0 if n is zero, 1 if n is greater than 1, and -1 if n is less than 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
