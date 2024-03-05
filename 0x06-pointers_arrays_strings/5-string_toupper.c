#include <stdio.h>

/**
 * string_toupper - function defined.
 * @a: function parameter.
 * Return: always variable a.
 */

char *string_toupper(char *a)
{
	char *b;

	for (b = a; *b != 0; b++)
	{
		if (*b >= 'a' && *b <= 'z')
		{
		*b = *b - ('a' - 'A');
		}
	}
	return (a);
}
