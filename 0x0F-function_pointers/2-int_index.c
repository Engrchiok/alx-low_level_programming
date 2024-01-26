/**
 * int_index - function that searches for an integer.
 * @array: function parameter.
 * @size: function parameter.
 * @cmp: function parameter.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && size && cmp)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]))
			{
				return (a);
			}
		}
		return (-1);
	}
	else
	{
		return (-1);
	}
}
