#include <stdio.h>

/**
 * main - function call for entry point
 *
 * Return: always returns 0 at the end of the function call
 */

int main(void)
{

/**
 * printf - function call for printing text to standard output
 *
 * char - character data type
 *
 * long int - long integer data type
 *
 * long long int - long long integer data type
 *
 * float - float data type
 *
 * sizeof - constant that shows the byte sizes of the data type
 *
 * byte(s) - measure of memory occupied by data
 */

	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
