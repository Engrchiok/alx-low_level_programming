#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: function parameter.
 * Return: returns 0 or pointer variable dup.
 */

char *_strdup(char *str)
{
	int i, len;
	char *dup;

	if (*str == 0)
	{
		return (0);
	}
	for (len = 0; str[len] != 0; len++)
	{
	}
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup == 0)
	{
		return (0);
	}
	for (i = 0; str[i] != 0; i++)
	{
		dup[i] = str[i];
	}
	dup[i] = str[i];
	free(dup);
	return (dup);
}
