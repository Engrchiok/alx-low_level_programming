#include <stdio.h>

/**
 * _strcmp - function defined.
 * @s1: function parameter.
 * @s2: function parameter.
 * Return: always variable cmp.
 */

int _strcmp(char *s1, char *s2)
{
	int cmp;

	while (!(*s1 == 0 && *s2 == 0))
	{
		if (*s1 != *s2)
		{
			cmp = *s1 - *s2;
			break;
		}
		else
		{
			cmp = 0;
		}
		s1++;
		s2++;
	}
	return (cmp);
}
