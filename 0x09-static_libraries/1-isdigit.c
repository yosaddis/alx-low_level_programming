/**
 * _isdigit - check for digits
 * Return: 1 on success
 * @c: given charachter
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

