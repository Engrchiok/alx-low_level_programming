#include <stdio.h>

/**
 * array_iterator - function that executes a function given as a parameter on each element of an array.
 * @array: function parameter.
 * @size: function parameter.
 * @action: function parameter.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
