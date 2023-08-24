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
	int t8;

	for (t8 = 48; t8 <= 102; t8++)
	{
		while (t8 >= 58 && t8 < 97)
		{
			t8++;
		}
		putchar(t8);
	}
	putchar('\n');

	return (0);
}
