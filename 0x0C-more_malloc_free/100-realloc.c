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
		c = ptr;
		a = malloc(new_size);
		for (b = a; *c != 0;)
		{
			if (a != NULL)
			{
				return (0);
			}
			else
				*b++ = *c++;
		}
		return (a);
	}
}
