#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int sum, i, b;
	char *test;

	sum = 0;
	for (i = 1; argv[i] != 0; i++)
	{
		test = argv[i];
		for (b = 0; *(test + b) != 0; b++)
		{
		if (*(test + b) < '0' || *(test + b) > '9')
				{
				printf("Error\n");
				return 1;
				}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	(void)argc;
	return 0;
}

