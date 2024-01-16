#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: function parameter.
 * Return: returns 0 or pointer variable dup.
 */

char *_strdup(char *str)
{
	int i, len;
	char *dup, *cpy;

	if (*str == 0)
	{
		return (0);
	}
	else
	{
	cpy = str;
	for (len = 0; *cpy != 0; len++, cpy++)
	{
	}
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; *str != 0; i++, str++)
		{
			dup[i] = *str;
		}
		dup[i] = *str;
		free(dup);
		return (dup);
	}
	}
}
