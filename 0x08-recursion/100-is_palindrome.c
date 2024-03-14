#include <stdio.h>
#include "main.h"

/**
 * is_palindrome - function definition.
 * @s: function parameter.
 * Return: always an integer.
 */

int is_palindrome(char *s)
{
	return (_pal(_rev(s), s));
}


/**
 * _rev - function definition.
 * @a: function parameter.
 * Return: always an integer.
 */

char *_rev(char *a)
{
	if (*(a + 1) == 0)
	{
		return (a);
	}
	return (_rev(a + 1));
}


/**
 * _pal - function definition.
 * @b: function parameter.
 * @c: function parameter.
 * Return: always an integer.
 */

int _pal(char *b, char *c)
{
	if (*c == 0)
	{
		return (1);
	}
	else if (*b != *c)
	{
		return (0);
	}
	else return (1 * _pal(b - 1, c + 1));
}
