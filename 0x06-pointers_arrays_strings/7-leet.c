#include <stdio.h>

/**
 * leet - function defined.
 * @a: function parameter.
 * Return: always variable a.
 */

char *leet(char *a)
{
	char b[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char c[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int d;
	char *e = a;

	while (*e != 0)
	{
		d = 0;
		while (d < 10)
		{
			if (b[d] == *e)
			{
				*e = c[d];
			}
			d++;
		}
		e++;
	}
	return (a);
}
