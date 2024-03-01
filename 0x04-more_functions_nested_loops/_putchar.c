#include <stdio.h>
#include <unistd.h>

void _putchar(char a)
{
	write(1, &a, sizeof(char));
}
