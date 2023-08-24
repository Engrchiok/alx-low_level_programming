#include <stdio.h>

/**
 * main - function call for entry point
 *
 * Return: always 0
 *
 * char - data type for characters like alphabets
 *
 * while - a loop operand
 *
 * putchar - function call for displaying characters on standard output
 */

int main(void)
{
	char t2 = 'a';
	char t3 = 'A';

	while (t2 <= 'z')
	{
		putchar(t2);
		t2++;
	}

	while (t3 <= 'Z')
	{
		putchar(t3);
		t3++;
	}

	putchar('\n');

	return (0);
}
