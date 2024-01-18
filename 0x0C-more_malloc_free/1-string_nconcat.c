#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * _strlen - function that computes the lenght of a string.
 * @s1: function parameter.
 * @s2: funtion parameter.
 * @n: function parameter.
 * Return: Returns l, and 0 or pointer a.
 */

unsigned int _strlen(char*);

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a, *b;
	int l;

	if (s1 == NULL & s2 == NULL)
	{
		return (0);
	}
	if (n < _strlen(s2))
	{
		a = malloc(_strlen(s1) + n + 1);
		l = n;
		if (a == NULL)
		{
			return (0);
		}
	}
	else
	{
		a = malloc(_strlen(s1) + _strlen(s2) + 1);
		l = _strlen(s2);
		if (a == NULL)
		{
			return (0);
		}
	}
	b = a;
	for (b = a; l != 0; l--, b++)
	{
		while (*s1 != 0)
		{
			*b++ = *s1++;
		}
		*b = *s2++;
	}
	*b = 0;
	return (a);
}

unsigned int _strlen(char *s)
{
	unsigned int l;

	for (l = 0; *s != 0; s++, l++)
	{
	}
	return (l);
}
