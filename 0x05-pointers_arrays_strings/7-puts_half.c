#include "main.h"

void puts_half(char *str)
{
	int len;
	int l;
	char *s;

	s = str;
	for (len = 0; *s != 0; s++)
	{
		len++;
	}
	l = len / 2;
	if (len % 2 != 0)
	{
		l = l + 1;
	}
	str = str + l;
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
