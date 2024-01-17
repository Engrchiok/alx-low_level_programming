#include <stdio.h>
#include <stdlib.h>
/**
 * main - function call.
 * @argc: function parameter.
 * @argv: function parameter.
 * Return: always return 0.
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
