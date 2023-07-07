#include "main.h"
/**
 *helperfunction - checks if we can calculate the sqrt of a number
 *@n: number whose sqrt is been found
 *@sqrt: positive and real sqrt of a n
 *Return: sqrt of number n, -1 if n > 0
 */
int helperfunction(int n, int sqrt)
{
	if ((sqrt * sqrt) == n)
	{
		return (sqrt);
	}
	else
	{
		if ((sqrt * sqrt) > n)
			return (-1);
		else
			return (helperfunction(n, sqrt + 1));
	}
}

/**
 *_sqrt_recursion - returns the natural/real squareroot of N
 *
 *@N: number whose sqrt is being found
 * Return: squareroot of N, -1 if N does not have a natural & (only) real sqrt
 */
int _sqrt_recursion(int N)
{
	if (N < 0)
		return (-1);
	else
		return (helperfunction(N, 0));
}
