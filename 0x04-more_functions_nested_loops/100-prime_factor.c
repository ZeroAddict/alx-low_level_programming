#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int b;
	long int max;
	long int i;

	b = 612852475143;
	max = -1;

	while (b % 2 == 0)
	{
		max = 2;
		b /= 2;
	}

	for (i = 3; i <= sqrt(b); i = i + 2)
	{
		while (b % i == 0)
		{
			max = i;
			b = b / i;
		}
	}

	if (b > 2)
		max = b;

	printf("%ld\n", max);

	return (0);
}
