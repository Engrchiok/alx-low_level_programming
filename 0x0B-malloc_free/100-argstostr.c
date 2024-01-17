#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: function parameter.
 * @av: function parameter.
 * Return: NULL or str.
 */

char *argstostr(int ac, char **av)
{
	int a, b, l;
	char *str, *cpy;

	if (ac == 0 || av == NULL)
		return NULL;
	for (a = 0, l = 0; a < ac; a++)
	{
		cpy = av[a];
		for (b = 0; *cpy != 0; b++, cpy++)
		{
		}
		l += b + 1;
	}
	str = malloc((sizeof(char) * l) + 1);
	if (str == NULL)
		return NULL;
	for (a = 0, b = 0; a < ac; a++)
	{
		while (*av[a] != 0)
		{
		str[b++] = *av[a]++;
		}
		str[b++] = 10;
	}
	str[b] = 0;
	return (str);
}
