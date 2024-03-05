#include <stdio.h>
#include <stdlib.h>

/**
 * rot13 - function defined.
 * @a: function parameter.
 * Return: always variable a.
 */

char *rot13(char *a)
{
	char b[] = {97, 'A', 98, 'B', 99, 'C', 'd', 'D', 'e', 'E', 'f', 'F', 'g', 'G', 'h', 'H', 'i', 'I', 'j', 'J', 'k', 'K', 'l', 'L', 'm', 'M', 'n', 'N',  'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R', 's', 'S', 't', 'T', 'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y', 'z', 'Z'};
	char c[] = {110, 'N', 111, 'B' + 13, 112, 'C' + 13, 'q', 'D' + 13, 'r', 'E' + 13, 'f' + 13, 'F' + 13, 'g' + 13, 'G' + 13, 'h' + 13, 'H' + 13, 'i' + 13, 'I' + 13, 'j' + 13, 'J' + 13, 'k' + 13, 'K' + 13, 'l' + 13, 'L' + 13, 'm' + 13, 'M' + 13, 'n' - 13, 'N' - 13,  'o' - 13, 'O' - 13, 'p' - 13, 'P' - 13, 'q' - 13, 'Q' - 13, 'r' - 13, 'R' - 13, 's' - 13, 'S' - 13, 't' - 13, 'T' - 13, 'u' - 13, 'U' - 13, 'v' - 13, 'V' - 13, 'w' - 13, 'W' - 13, 'x' - 13, 'X' - 13, 'y' - 13, 'Y' - 13, 'z' - 13, 'Z' - 13};
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
