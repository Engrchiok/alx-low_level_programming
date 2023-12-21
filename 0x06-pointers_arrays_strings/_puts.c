#include <unistd.h>

/**
 * _puts - function definition for printing a string.
 * write - function call for a system call that opens a file/buffer and writes it to standard output, standard error, or other buffers.
 * @str: function single argument.
 * Return: always void.
 */

void _puts(char *str)
{
	char *a;
	int l;

	a = str;
	for (l = 0; *a != 0; a++)
	{
		l++;
	}
	write(1, str, l);
}
