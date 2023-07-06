#include "main.h"
/**
 *helperfunction - checks if we can calculate the sqrt of a number
 *@n: number whose sqrt is been found
 *@sqrt: positive and real sqrt of a n
 *Return: sqrt of number n
 *Return: -1 if n > 0
 */
int helperfunction(int n, int sqrt)
{
	if (sqrt * sqrt) == n)
	{
		return (sqrt);
	}
	else
	{
		if ((sqrt * sqrt) > n)
			return (-1);
		else
			return (helperfunctiom(n, sqrt + 1));
	}
}
