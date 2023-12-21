#include <stdlib.h>

char *_strdup(char *str)
{
	int i, len;
	char *dup, *cpy;

	cpy = str;
	for (len = 0; *cpy != 0; len++, cpy++)
	{
	}
	dup = malloc((len + 1) * sizeof (char));
	if (*str == 0)
	{
		free(cpy);
		return 0;
	}
	else
	{
		for (i = 0; *str != 0; i++, str++)
		{
			dup[i] = *str;
		}
		dup[i] = *str;
		free(dup);
		return dup;
	}
}
