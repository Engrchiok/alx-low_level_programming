#include "main.h"

/**
 * int print_last_digit - function definition for printing the last digit of any number.
 * _putchar - function call for printing single character.
 * Return: always the computed last digit of the argument.
 */

int print_last_digit(int n)
{
	int l;
	l = n % 10;
	if (n < 0)
	{
		l = -(l);
	}
	_putchar(l + '0');
	return (l);
}
