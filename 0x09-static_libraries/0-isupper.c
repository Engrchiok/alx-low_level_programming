/**
 * _isupper - function definition for checking uppercase characters.
 * @c: function parameter.
 * Return: integer res, which is either 1 or 0.
 */

int _isupper(int c)
{
	int res;

	if (c >= 'A' && c <= 'Z')
	{
		res = 1;
	}
	else 
	{
		res = 0;
	}
	return (res);
}
