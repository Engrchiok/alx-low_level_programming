#include <stdio.h>
#include <stdlib.h>

/**
 * main - function call for program execution.
 * @void: no function parameter needed.
 * printf - function call to print data.
 * Return: always 0.
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 != 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0 && a % 3 != 0)
		{
			printf("Buzz");
		}
		else if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
			printf("%d", a);
		if (a < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
