#include "main.h"

/**
 * print_most_numbers - function definition
 */

void print_most_numbers(void)
{
	int a = '0';
	while (a <= '9')
	{
		if (a == '2' || a == '4')
		{
			++a;
		}
		else
			a = a;
		_putchar(a);
		a++;
	}
		_putchar(10);
}
