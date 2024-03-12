#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - function definition.
 * @s: function parameter.
 * Return: void.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	write(1, s, 1);

	_puts_recursion(s + 1);
}
