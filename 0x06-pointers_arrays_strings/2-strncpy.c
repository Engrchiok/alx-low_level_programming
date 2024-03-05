#include <stdio.h>
#include "main.h"

/**
 * _strncpy - function defined.
 * @dest: function parameter.
 * @src: function parameter.
 * @n: function parameter.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;
	char *b;

	b = dest;
	for (a = 1; a <= n; a++)
	{
		if (*src != 0)
		{
			*dest++ = *src++;
			if (*dest == 0)
			{
				break;
			}
		}
		else
		{
			*dest++= '\0';
		}
	}
	return (b);
}
