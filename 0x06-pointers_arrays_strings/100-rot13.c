#include <stdio.h>

/**
 * rot13 - function defined.
 * @a: function parameter.
 * Return: always variable a.
 */

char *rot13(char *a)
{
	char b[] = {97, 65, 98, 66, 99, 67, 100, 68, 101, 69, 102, 70, 103, 71, 104, 72, 105, 73, 106, 74, 107, 75, 108, 76, 109, 77, 110, 78, 111, 79, 112, 80, 113, 81, 114, 82, 115, 83, 116, 84, 117, 85, 118, 86, 119, 87, 120, 88, 121, 89, 122, 90};
	char c[] = {110, 78, 111, 79, 112, 80, 113, 81, 114, 82, 115, 83, 116, 84, 117, 85, 118, 86, 119, 87, 120, 88, 121, 89, 122, 90, 97, 65,  98, 66, 99, 67, 100, 68, 101, 69, 102, 70, 103, 71, 104, 72, 105, 73, 106, 74, 107, 75, 108, 76, 109, 77};
	int d;
	char *e = a;

	while (*e != 0)
	{
		d = 0;
		while (d < 52)
		{
			if (b[d] == *e)
			{
				*e = c[d];
				break;
			}
			d++;
		}
		e++;
	}
	return (a);
}
