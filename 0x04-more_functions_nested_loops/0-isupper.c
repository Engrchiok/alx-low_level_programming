/**
 * _isupper - function definition for identifying upper characters
 * @c: Integer function parameter
 * Return: Always returns 1 or 0
 */

int _isupper(int c)
{
	int ret;

	if (c >= 'A' && c <= 'Z')
		ret = 1;
	else
		ret = 0;
	return (ret);
}
