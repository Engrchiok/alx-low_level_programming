#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - executes a function on each element of an array.
 * @array: function parameter.
 * @size: function parameter.
 * @action: function parameter.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array && size && action)
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}
