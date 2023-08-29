#include "main.h"

/**
 * print_numbers - function being defined
 * _putchar - custom function call for printing characters
 */

void print_numbers(void)
{
	int a = '0';

	while (a <= '9')
	{
		_putchar(a);
		a++;
	}
	_putchar(10);
}
