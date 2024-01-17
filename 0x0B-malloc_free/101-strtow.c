#include <stdlib.h>

/**
 * strtow - function that splits a string into words.
 * @str: function parameter.
 * Return: always NULL or 0 or star.
 */

char **strtow(char *str)
{
	char **star, *cpy;
	int a, b, l;

	if (str == NULL)
		return (NULL);
	for (a = 0, l = 0; str[a] != 0; a++)
	{
		if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == 0))
			l++;
	}

	star = (char **) malloc(sizeof(char *) * (l + 1));
	if (star == NULL)
		return (NULL);

	for (a = 0, b = 0, l = 0; str[a] != 0; a++)
	{
		if (str[a] != ' ' && str[a] != 0)           
			l++;
		if (str[a] == ' ' && l > 0)
		{                                               star[b] = malloc(sizeof(char) * l + 1);
			l = 0;
			b++;
		}
	}
	if (l > 0)
	{
		star[b] = malloc(sizeof(char) * l + 1);
		l = 0;
	}

	for (a = 0, b = 0, l = 0; str[a] != 0; a++)
	{
		if (str[a] != ' ' && str[a] != 0)
			l++;
		if (str[a] == ' ' && l > 0)
		{
			if (star[b] == 0)
				return (NULL);
			for (cpy = star[b]; l > 0; l--)
			{
				*cpy++ = str[a - l];
			}
			*cpy++ = 0;
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
		b++;
	}
	star[b] = 0;
	return (star);
}
