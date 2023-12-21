#include <stdio.h>

void print_array(int *a, int n)
{
	int b;

	for (b = 1; b <= n; b++)
	{
		printf("%d", *a++);
		if (b < n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
