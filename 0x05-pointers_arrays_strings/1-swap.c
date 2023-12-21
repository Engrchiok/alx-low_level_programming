/**
 * swap_int - function definition for swapping the values of two integers.
 * @a - first function parameter.
 * @b - second function parameter.
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
