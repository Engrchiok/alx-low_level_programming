#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - function definition.
 * @s: function parameter.
 * Return: eventually 0.
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
