#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: function parameter.
 * @size: function parameter.
 * Return: always rerurns NULL or pointer a.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	unsigned int b, *c;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else 
	{
		a = malloc(nmemb * size);
		if (a == 0)
		{
			return (NULL);
		}
		for (b = 1, c = a; b <= nmemb; b++)
		{
			*c++ = 0;
		}
		return (a);
	}
}
