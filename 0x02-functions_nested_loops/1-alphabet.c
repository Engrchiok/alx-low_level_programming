#include "main.h"

/**
 * print_alphabet - function definition that prints lowercase alphabets only.
 *
 * _putchar - function call that prints singgle characters.
 */

void print_alphabet(void)
{
	int a;
	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
