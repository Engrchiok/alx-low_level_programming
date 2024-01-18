#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free.
 * @ptr: function parameter.
 * @old_size: function parameter.
 * @new_size: function parameter.
 * Return: pointer ptr, 0 or pointer a.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *a;
	int *c, *b;

	if (new_size == old_size)
	{
		return (ptr);
	}
	else
	{
		free(ptr);
		c = ptr;
		a = malloc(new_size);
		for (b = a; *c != 0;)
		{
			if (a != NULL)
			{
				free(a);
				free(b);
				free(c);
				return (0);
			}
			else
				*b++ = *c++;
		}
		free(a);
		free(b);
		free(c);
		return (a);
	}
}
