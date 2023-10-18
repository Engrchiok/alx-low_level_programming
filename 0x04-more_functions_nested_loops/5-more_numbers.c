#include "main.h"

/**
 * more_numbers - function definition for printing numbers 0 to 14, ten times.
 * _putchar - function call for printing single integers(charaters).
 * Return: void.
 */

void more_numbers(void)
{
	int a;
	int b;
	int t;
	int m;

	for (b = 1 ; b <= 10; b++)
	{
	for (a = 0; a <= 14; a++)
	{
		t = a / 10;
		m = a % 10;

		if (a > 9)
		{
			_putchar(t + '0');
		}
		_putchar(m + '0');
	}
		_putchar(10);
	}
}
