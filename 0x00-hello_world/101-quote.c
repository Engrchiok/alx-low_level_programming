#include <stdio.h>
#include <unistd.h>

/**
 * main - function call.
 * Return: always 1.
 */

int main(void)
{
	char n = '\n';
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int len;
	char *p;

	for (len = 0, p = s; *p != '\0'; p++, len++)
	{
	}
	write(2, s, sizeof(char) * len);
	write(2, &n, sizeof(char));
	return (1);
}
