#include "main.h"

/**
 * print_rev - function definition for printing a string in  reverse.
 * @s: function argument.
 * _putchar - function call for printing ASCII characters.
 * Return: void.
 */

void print_rev(char *s)
{
	int len;

	for (len = 0; *s != 0; s++)
	{
		len++;
	}

	do
	{
		--s;
		_putchar(*s);
		--len;
	}
	while (len > 0);

	_putchar('\n');
}
		
