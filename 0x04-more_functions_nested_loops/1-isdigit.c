/**
 * _isdigit - function definition for checking single digits.
 * @c : function parameter.
 * Return: integer ret, which is always 1 or 0.
 */

int _isdigit(int c)
{
	int ret;

	if (c >= '0' && c <= '9')
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}
	return (ret);
}
