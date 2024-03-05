#include <unistd.h>

/**
 * _putchar - function definition for printing single ASCII value characters.
 * @c: function single argument.
 * Return: always void.
 */

void _putchar(char c)
{
	write(1, &c, sizeof(char));
}
