#include <stdio.h>
#include <stdlib.h>

/**
 * main - function call.
 * Return: always 0.
 */

int main(void)
{
	int a, b, c, d;

	for (a = 48; a <= 57; a++)
	{
	for (b = 48; b <= 57; b++)
	{
	for (c = 48; c <= 57; c++)
	{
		if (c < a)
		{
		}
		else
		{
			for (d = 48; d <= 57; d++)
			{
				if (c == a && d <= b)
				{
				}
				else
				{
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);
					if (!((a == 57) && (b == 56) && (c == 57) && (d == 57)))
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	}
	}
	putchar(10);
	return (0);
}
