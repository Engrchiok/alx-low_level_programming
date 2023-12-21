#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int l1, l2, i, j;
	char *cpy1, *cpy2, *cpy3, *con;

	cpy1 = s1;
	cpy2 = s2;
	cpy3 = s1;
	for (l1 = 0; *cpy1 != 0; cpy1++, l1++)
	{
	}
	for (l2 = 0; *cpy2 != 0; cpy2++, l2++)
	{
	}
	con = malloc((sizeof (char) * (l1 + l2)) + 1);
	for (i = l1 ; *s2 != 0; s2++, i++)
	{
		for (j = 0; *s1 != 0; s1++, j++)
		{
			con[j] = *s1;
		}
		con[i] = *s2;
	}
	con[i] = 0;
	free(con);
	if (con[0] != *cpy3)
	{
		return 0;
	}
	return con;
}

