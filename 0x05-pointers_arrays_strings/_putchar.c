#include <unistd.h>

/**
 * _putchar - function definition for printing single ASCII characters.
 * @n: function parameter to print.
 * Return: void
 */

void _putchar(int n)
{
	write(1, &n, sizeof(n));
}
