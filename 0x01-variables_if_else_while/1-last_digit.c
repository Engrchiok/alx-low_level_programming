#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Function call for Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);

	l = n % 10;

	if (l > 5)
	{
		printf("%d and is greater than 5\n", l);
	}

	if (l == 0)
	{
		printf("%d and is 0\n", l);
	}

	if (l < 6 && l != 0)
	{
		printf("%d and is less than 6 and not 0\n", l);
	}

	return (0);
}
