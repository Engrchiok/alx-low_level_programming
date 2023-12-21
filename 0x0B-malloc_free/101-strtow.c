#include <stdlib.h>

char **strtow(char *str)
{
	char **star, *cpy;
	int a, b, l;

	if (str == 0)
	{
		return 0;
	}

	for (a = 0, l = 0; str[a] != 0; a++)
	{
		if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == 0))
		{
			l++;
		}
	}

	star = (char **) malloc(sizeof (char *) * (l + 1));
	if (star == 0)
	{
		return 0;
	}

	for (a = 0, b = 0, l = 0; str[a] != 0; a++)
	{
		if (str[a] != ' ' && str[a] != 0)           {                                               l++;
		}
		if (str[a] == ' ' && l > 0)
		{                                               star[b] = malloc(sizeof (char) * l + 1);
			l = 0;
			b++;
		}
	}
	if (l > 0)
	{
		star[b] = malloc(sizeof (char) * l + 1);
		l = 0;
	}

	for (a = 0, b = 0, l = 0; str[a] != 0; a++)
	{
		if (str[a] != ' ' && str[a] != 0)
		{
			l++;
		}
		if (str[a] == ' ' && l > 0)
		{
			if (star[b] == 0)
			{
				return 0;
			}
			for (cpy = star[b]; l > 0; l--)
			{
				*cpy++ = str[a - l];
			}
			*cpy++ = 0;
			free(star[b]);
			b++; 
		}
	}
	if (l > 0)
	{
		for (cpy = star[b]; l > 0; l--)
		{
			*cpy++ = str[a - l];
		}
		*cpy++ = 0;
		free(star[b]);
		free(cpy);
		b++;
	}
	star[b] = 0;
	free(star[b]);
	free(cpy);
	free(star);
	return star;
}
