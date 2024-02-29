#include <stdio.h>
#include <unistd.h>

/**
 * main - function call.
 * Return: always 1.
 */

int _strlen(char *);

int main(void)
{
	char n = '\n', *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(2, s, sizeof(char) * _strlen(s));
	write(1, &n, sizeof(char));
	return (1);
}

/**
 * _strlen - function definition.
 * @s: function parameter.
 * Return: always len.
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++, len++)
	{
	}
	return (len);
}
