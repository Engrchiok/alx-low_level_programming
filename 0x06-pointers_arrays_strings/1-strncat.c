#include <stdio.h>

/**
 * _strncat - function definition.
 * @dest: function parameter.
 * @src: function parameter.
 * @n: function parameter.
 * Return: always returns the pointer variable, dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *a;
	int b;

	for (a = dest; *a != 0; a++)
	{
	}
	for (b = 1; b <= n; b++)
	{
		if (*src != 0)
		{
			*a++ = *src++;
		}
		else
			break;
	}
	*a = 0;
	return (dest);
}
