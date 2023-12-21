#include "main.h"
#include <unistd.h>

/**
 * _puts - function definition for printing a string followed by a new line.
 * @str: function argument.
 * _putchar - function call for printing single ASCII characters.
 * Return: Always void.
 */

void _puts(char *str)
{
	int len;
	char *str1;

	str1 = str;

	for (len = 0; *str != 0; str++)
	{
		len++;
	}

	/**
	 * @str1: at this point, str has an incremented value, so str1 is used with the write function because it holds the initial value of str before it was incremented in the for loop.
	 */

	write(1, str1, len);
	_putchar(10);
}
