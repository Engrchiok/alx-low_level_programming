#include <unistd.h>
#include <string.h>
#include "main.h"

void _puts(char *s)
{
	write(1, s, strlen(s) * sizeof(char));
	_putchar(10);
}
