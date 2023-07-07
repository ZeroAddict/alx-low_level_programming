#include "main.h"
/**
 *factorial - returns factorial of a number
 *@n: number argument for factorial function
 *
 *Return: factorial of n
 * Return -1 if n < 0 errno -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
