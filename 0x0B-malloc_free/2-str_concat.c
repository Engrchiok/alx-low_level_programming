#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: function parameter.
 * @s2: function parameter.
 * Return: Returns NULL or pointer variable con.
 */

char *str_concat(char *s1, char *s2)
{
	int l1, l2, i, j;
	char *con;

	/*if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}*/
	if (s1 == NULL)
	{
		l1 = 0;
	}
	else
	{
		for (l1 = 0; s1[l1] != 0; l1++)
		{
		}
	}
	if (s2 == NULL)
	{
		l2 = 0;
	}
	else
	{
		for (l2 = 0; s2[l2] != 0; l2++)
		{
		}
	}
	con = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
	if (con == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		con[i] = s1[i];
	}
	j = l1 + l2;
	for (i = 0; j > l1; i++, l1++)
	{
		con[l1] = s2[i];
	}
	con[l1] = 0;
	return (con);
}
