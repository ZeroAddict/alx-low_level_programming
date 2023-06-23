/**
 * _isdigit - functions as a digit checker
 * @num: input to be checked
 *
 * Return: 0 or 1 (Success)
 */

int _isdigit(int num)
{
	if (num >= '0' && num <= '9')
		return (1);
	else
		return (0);
}
