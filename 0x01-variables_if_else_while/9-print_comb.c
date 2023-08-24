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
	int t9 = 48;

	while (t9 < 58)
	{
		putchar(t9);

		if (t9 < 57)
		{
		putchar(',');
		putchar(' ');
		}

		t9++;
	}

	putchar(10);

	return (0);
}
