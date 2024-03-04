#include <unistd.h>

/**
 * _strlen - function definition for computing the length of a string.
 * @s: function single argument.
 * Return: always variable l;
 */

int _strlen(char *s)
{
	int l;
	char *a;

	a = s;
	for (l = 0; *a != 0; a++)
	{
		l++;
	}
	return (l);
}
