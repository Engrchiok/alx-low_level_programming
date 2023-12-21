#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	unsigned int b;
	char *a = malloc(size * sizeof(unsigned int));

	if (size == 0)
	{
		return 0;
	}
	else
	{
		for (b = 0; b < size; b++)
		{
			a[b] = c;
		}
		if (a[0] == c && a[b - 1] == c)
		{
			return a;
		}
		else return 0;
	}
}

