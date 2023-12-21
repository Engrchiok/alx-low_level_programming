#include <stdio.h>

/**
 * print_to_98 - function definition for printing natural numbers successively till 98.
 * Return: void.
 */

void print_to_98(int n)
{
	if ( n < 98)
	{
	do
	{
	printf("%d", n);
	if (n < 98)
	{
	printf(", ");
	}
	if (n == 98)
	{
	printf("\n");
	}
	n++;
	}
	while ( n <= 98);
	}

	else if (n == 98)
	{
	printf("%d\n", n);
	}

	else
	{
	do
	{
	printf("%d", n);
	if (n > 98)
	{
	printf(", ");
	}
	if (n == 98)
	{
	printf("\n");
	}
	n--;
	}
	while (n >= 98);
	}
}
