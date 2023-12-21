#include "main.h"

/**
 * rev_string - function definition for reversing a string.
 * @s - function parameter.
 * Return: void.
 */

int _strlen(char *s);

 void rev_string(char *s)
{
//	int z = _strlen(s);
	char a[9];

	char *b;
	char *c;
	int e = 0;
	int l;
	int len;
	c = s;
	b = s;

	for (len = 0; *c != 0; c++)
	{
		len++;
	}

	l = len;

	while (l > 0)
	{
		if (*b != 0)
		{
		*(a + e) = *b;
		}
		else
		{
		*(a + e) = '\0';
		}
		l--;
		b++;
		e++;
	}

	while (len > 0)
	{
		--len;
		*s++ = *(a + len);
//		s++;
	}

/*	*(s + 0) = *(a + 8);
	*(s + 1) = *(a + 7);
	*(s + 2) = *(a + 6);
	*(s + 3) = *(a + 5);*/
}

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != 0; s++)
	{
		len++;
	}
	return (len);
}

