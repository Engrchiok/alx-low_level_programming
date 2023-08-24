#include <stdio.h>

/**
 * main - function call for entry point
 * Return: always 0
 * int - data type for ordinary integers
 * while - a loop operand
 * putchar - function call for displaying characters on standard output
*/

int main(void)
{

	int t9;
	int t10;
	int t11;

	for (t9 = 48; t9 < 58; t9++)
	{
		for (t10 = t9; t10 < 58; t10++)
		{
			if (t10 == t9)
			{
				t10++;
			}
			for (t11 = t10; t11 < 58; t11++)
			{
				if (t10 == t11)
				{
					t11++;
				}
				if (t11 > 57)
				{
					break;
				}
				if (t11 == 58 && t10 == t11 - 1 && t9 == t10 - 1)
				{
					break;
				}
				putchar(t9);
				putchar(t10);
				putchar(t11);
				if (!(t11 == 57 && t10 == 56 && t9 == 55))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
