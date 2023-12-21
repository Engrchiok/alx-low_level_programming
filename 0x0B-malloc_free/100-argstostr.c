#include <stdlib.h>

char *argstostr(int ac, char **av)
{
	int a, b, l;
	char *str, *cpy;

	for (a = 0, l = 0; a < ac; a++)
	{
		cpy = av[a];
		for (b = 0; *cpy != 0; b++, cpy++)
		{
		}
		l += b + 1;
	}
	str = malloc((sizeof (char) * l) + 1);
	for (a = 0, b = 0; a < ac; a++)
	{
		while (*av[a] != 0)
		{
		str[b++] = *av[a]++;
		}
		str[b++] = 10;
	}
	str[b] = 0;
	return str;
}
