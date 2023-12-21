#include "main.h"

void puts2(char *str)
{
	int b;

	b = 0;
	while (*str != 0)
	{
		if (b % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
		b++;
	}
	_putchar(10);

/*	while (*str > 0)
	{
		++str;
		*str = *(str + a);*/
}
