#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: function parameter.
 * Return: always a.
 * Exit: 98.
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == 0)
	{
		exit(98);
	}
	return (a);
}
