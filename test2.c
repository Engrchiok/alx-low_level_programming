#include <stdio.h>

char _putchar(char);

char _putchar(char a)
{
	return (putchar(a));
}

int main(void)
{
	_putchar('D');
	_putchar(10);
	return (0);
}
