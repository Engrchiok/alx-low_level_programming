#include <stdio.h>

/**
 * mulsum - function definition for computing and printing the sum of the multiples of 3 or 5.
 * Return: void.
 */

void mulsum(void)
{
	int nat;
	int sum;
	sum = 0;

	for (nat = 0; nat < 1024; nat++)
	{
		if (nat % 3 == 0 || nat % 5 == 0)
			sum = sum + nat;
	}
	printf("%d\n", sum);
}

