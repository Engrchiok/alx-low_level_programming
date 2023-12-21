#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int b, c, d, e, f;

	for (b = 0, c = size - 1, d = 0, e = 0, f = 0; d < size; b = b + size + 1, c = c + size - 1, d++)
	{
		e = e + a[b];
		f = f + a[c];
	}
	printf("%d, %d\n", e, f);
}
