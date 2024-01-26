#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: function parameters.
 * Return: always 0 or sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	int sum;

	if (n == 0)
	{
		return (0);
	}
	va_start(a, n);
	for (i = 0, sum = 0; i < n; i++)
	{
		sum += va_arg(a, int);
	}
	return (sum);
}

