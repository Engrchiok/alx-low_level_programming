#include <stdio.h>

/**
 * cap_string - function defined.
 * @a: function parameter.
 * Return: always variable a.
 */

char *cap_string(char *a)
{
	char *b;

	for (b = a; *b != 0; b++)
	{
		if (*(b - 1) == ' ' || *(b - 1) == '\n' || *(b - 1) == '\t')
		{
			if (*b >= 'a' && *b <= 'z')
			{
				*b = *b - ('a' - 'A');
			}
		}
	}
	return (a);
}
