#include "main.h"

/**
 * void jack_bauer(void) - function definition for printing every minute of the day.
 * _putchar - function call for printing single characters.
 * Return: always returns nothing.
 */

void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for ( a = '0'; a <= '2'; a++ )
	{
	for ( b = '0'; b <= '3'; b++ )
	{
	for ( c = '0'; c <= '5'; c++ )
	{
	for ( d = '0'; d <= '9'; d++ )
	{
		_putchar(a);
		_putchar(b);
		_putchar(':');
		_putchar(c);
		_putchar(d);
		_putchar(10);
	}
	}
	}
	}
}
