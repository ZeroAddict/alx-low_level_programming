#include "main.h"
/**
 *helperfunction - returns or 1
 *@num: number being checked if prime
 *@i: possible factors of the number
 *
 * Return: 0 if not prime, 1  if number is prime
 */
int helperfunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperfunction(num, i + 1));
		}
	}
	else
		return (1);
}

/**
 *
 *
 *0 if number is not prime
 */
int is_prime_number(int n)
{
	if ( n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperfunction(n, 2));
	}
}