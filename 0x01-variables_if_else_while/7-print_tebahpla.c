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
	char t7 = 'z';

	while (t7 >= 'a')
	{
		putchar(t7);
		t7--;
	}
	putchar('\n');

	return (0);
}
