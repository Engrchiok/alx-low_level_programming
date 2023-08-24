#include <stdio.h>

/**
 * main - function call for entry point
 *
 * Return: always 0
 *
 * int - data type for ordinary integers
 *
 * while - a loop operand
 *
 * putchar - function call for displaying characters on standard output
 */

int main(void)
{
	int t9;
	int t10;

	for (t9 = 48; t9 < 58; t9++)
	{
		for (t10 = t9; t10 < 58; t10++)
		{
			if (t9 == t10)
			{
				t10++;
			}

			if (t9 == 57 && t10 == t9 + 1)
			{
				break;
			}

			putchar(t9);
			putchar(t10);

			if (!(t10 == 57 && t9 == 56))
			{
				putchar(',');
				putchar(' ');
			}

		}

	}

	putchar(10);

	return (0);
}
