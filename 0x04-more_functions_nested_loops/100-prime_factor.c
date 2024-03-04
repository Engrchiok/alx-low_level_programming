#include <stdio.h>
#include <stdlib.h>

/**
 * main - function call and definition.
 * @void: no parameter or argument.
 * Return: always 0.
 */

int main(void)
{
	long n, p, c, h;

	for (n = 612852475143, p = 2, h = 0; p < n; p++)
	{
		if (n % p == 0)
		{
			for (c = 2; c < p; c++)
			{
				if (p % c == 0)
				{
					break;
				}
				else
				{
					h = p;
				}
			}
		}
	}
	if (h == 0)
	{
		printf("The largest prime factor of the number 612852475143 is %ld\n", n);
	}
	else
	{
		printf("the largest prime factor of the number 612852475143 is %ld\n", h);
	}
	return (0);
}
