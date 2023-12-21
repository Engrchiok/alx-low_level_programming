#include "main.h"

/**
 * print_alphabet_x10 - function definition for printing lowercase alphabets 10 times over.
 *
 * print_alphabet - function call for printing lowercase alphabets.
 */

void print_alphabet_x10(void)
{
	int x;
	for (x = 1; x <= 10; x++)
	{
		print_alphabet();
	}
}

void print_alphabet(void)
{
	int a;
	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
