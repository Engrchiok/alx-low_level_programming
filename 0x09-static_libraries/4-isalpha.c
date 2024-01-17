#include "main.h"

/**
 * _isalpha - function definition that confirms the availability of all alphabets, both lower case and uppercase.
 *
 * _putchar - function call that prints single charaters.
 */

int _isalpha(int c)
{
	int result;
	if ( (c >= 'A' && c <= 'Z') || (c <= 'z' && c >= 'a') )
	{
		result = 1;
	}
	else result = 0;

	return (result);
}
