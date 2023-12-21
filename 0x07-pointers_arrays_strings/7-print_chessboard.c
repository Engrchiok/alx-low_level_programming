#include "main.h"

void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0, c = 0; a[b][c] != 0;)
	{
		_putchar(a[b][c]);
		if (c == 7)
		{
			_putchar(10);
			b++;
			c = 0;
		}
		else c++;
	}
}
