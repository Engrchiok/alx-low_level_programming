#include <stdio.h>
#include <stdlib.h>

/**
 * main - function call.
 * @argc: function parameter.
 * @argv: function parameter.
 * Return: always 0 or 1.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
