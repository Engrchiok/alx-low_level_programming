#include <stdlib.h>

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

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	for (l1 = 0; s1[l1] != 0; l1++)
	{
	}
	for (l2 = 0; s2[l2] != 0; l2++)
	{
	}
	con = malloc((sizeof(char) * (l1 + l2)) + 1);
	if (con == NULL)
	{
		return (NULL);
	}
	for (j = 0; s1[j] != 0; j++)
	{
		con[j] = s1[j];
	}
	for (i = 0; s2[i] != 0; i++, j++)
	{
		con[j] = s2[i];
	}
	con[j] = s2[i];
	free(con);
	return (con);
}
